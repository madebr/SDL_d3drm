cmake_minimum_required(VERSION 3.30)
project(SDL3_d3drm C)

include(CheckLinkerFlag)

if(NOT WIN32)
    file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/dummy.sym" "n_0 {\n global:\n  func;\n local: *;\n};\n")
    check_linker_flag(C "-Wl,--version-script=${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/dummy.sym" HAVE_WL_VERSION_SCRIPT)
    check_linker_flag(C "-Wl,--error-unresolved-symbols" HAVE_WL_ERROR_UNRESOLVED_SYMBOLS)
    check_linker_flag(C "-Wl,--no-undefined" HAVE_WL_NO_UNDEFINED)
endif()

find_package(SDL3 REQUIRED CONFIG)

if(MSVC)
    add_compile_options(/W3)
else()
    add_compile_options(-Wall -Wextra)
endif()

function(add_directx_library NAME)
    cmake_parse_arguments(ARG "" "DEF;VERSION_SCRIPT" "SRC" ${ARGN})
    add_library(SDL3_${NAME} MODULE
        ${ARG_SRC}
        ${ARG_DEF}
    )
    target_include_directories(SDL3_${NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")
    target_include_directories(SDL3_${NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src")
    if(WIN32)
        set_property(TARGET SDL3_${NAME} PROPERTY PREFIX "")
    endif()
    set_property(TARGET SDL3_${NAME} PROPERTY OUTPUT_NAME "SDL3_${NAME}")
    set_property(TARGET SDL3_${NAME} PROPERTY SOVERSION "0")
    target_link_Libraries(SDL3_${NAME} PRIVATE SDL3::SDL3)
    if(HAVE_WL_VERSION_SCRIPT)
        target_link_options(SDL3_${NAME} PRIVATE "-Wl,--version-script=${ARG_VERSION_SCRIPT}")
        set_property(TARGET SDL3_${NAME} APPEND PROPERTY LINK_DEPENDS "${ARG_VERSION_SCRIPT}")
    endif()
    if(WIN32)
        set_property(TARGET SDL3_${NAME} APPEND PROPERTY LINK_DEPENDS "${ARG_DEF}")
    endif()
    if(HAVE_WL_ERROR_UNRESOLVED_SYMBOLS)
        target_link_options(SDL3_${NAME} PRIVATE "-Wl,--error-unresolved-symbols")
    endif()
    if(HAVE_WL_NO_UNDEFINED)
        target_link_options(SDL3_${NAME} PRIVATE "-Wl,--no-undefined")
    endif()
endfunction()

function(add_forward_library NAME)
    cmake_parse_arguments(ARG "" "DEF;VERSION_SCRIPT" "SRC" ${ARGN})
    add_library(${NAME}-forward SHARED
        ${ARG_DEF}
        ${ARG_SRC} src/common/common_forward.h
    )
    target_include_directories(${NAME}-forward PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>")
    target_include_directories(${NAME}-forward PRIVATE "src")
    target_link_libraries(${NAME}-forward PRIVATE ${CMAKE_DL_LIBS})
    target_link_libraries(${NAME}-forward PUBLIC SDL3::Headers)
    set_property(TARGET ${NAME}-forward PROPERTY OUTPUT_NAME "${NAME}")
    set_property(TARGET ${NAME}-forward APPEND PROPERTY BUILD_RPATH "$<TARGET_FILE_DIR:SDL3_${NAME}>")
    if(WIN32)
        set_property(TARGET ${NAME}-forward PROPERTY PREFIX "")
    endif()
    if(HAVE_WL_VERSION_SCRIPT)
        target_link_options(${NAME}-forward PRIVATE "-Wl,--version-script=${ARG_VERSION_SCRIPT}")
        set_property(TARGET ${NAME}-forward APPEND PROPERTY LINK_DEPENDS "${ARG_VERSION_SCRIPT}")
    endif()
    if(WIN32)
        set_property(TARGET ${NAME}-forward APPEND PROPERTY LINK_DEPENDS "${ARG_DEF}")
    endif()
    if(HAVE_WL_ERROR_UNRESOLVED_SYMBOLS)
        target_link_options(${NAME}-forward PRIVATE "-Wl,--error-unresolved-symbols")
    endif()
    if(HAVE_WL_NO_UNDEFINED)
        target_link_options(${NAME}-forward PRIVATE "-Wl,--no-undefined")
    endif()
    add_dependencies(${NAME}-forward SDL3_${NAME})
endfunction()


if(MSVC)
    set(D3DRM_DEF "src/d3drm/d3drm.msvc.def")
else()
    set(D3DRM_DEF "src/d3drm/d3drm.mingw.def")
endif()
add_directx_library(d3drm
    DEF "${CMAKE_CURRENT_SOURCE_DIR}/${D3DRM_DEF}"
    VERSION_SCRIPT "${CMAKE_CURRENT_SOURCE_DIR}/src/d3drm/d3drm.sym"
    SRC
        src/d3drm/idirect3drm.c
        src/d3drm/idirect3drm.h
        src/d3drm/math.c
)
add_forward_library(d3drm
    DEF "${CMAKE_CURRENT_SOURCE_DIR}/${D3DRM_DEF}"
    VERSION_SCRIPT "${CMAKE_CURRENT_SOURCE_DIR}/src/d3drm/d3drm.sym"
    SRC "src/d3drm/forward.c"
)

add_executable(d3drm_test
    src/d3drm/test/test.c
)
target_include_directories(d3drm_test PRIVATE "include")
target_link_libraries(d3drm_test PRIVATE d3drm-forward)
target_link_libraries(d3drm_test PRIVATE SDL3::SDL3_test SDL3::SDL3)

if(MSVC)
    set(D3DXOF_DEF "src/d3dxof/d3dxof.msvc.def")
else()
    set(D3DXOF_DEF "src/d3dxof/d3dxof.mingw.def")
endif()
add_directx_library(d3dxof
    DEF "${CMAKE_CURRENT_SOURCE_DIR}/${D3XOF_DEF}"
    VERSION_SCRIPT "${CMAKE_CURRENT_SOURCE_DIR}/src/d3dxof/d3dxof.sym"
    SRC
        src/d3dxof/idirectxfile.c
)
add_forward_library(d3dxof
    DEF "${CMAKE_CURRENT_SOURCE_DIR}/${D3DXOF_DEF}"
    VERSION_SCRIPT "${CMAKE_CURRENT_SOURCE_DIR}/src/d3dxof/d3dxof.sym"
    SRC "src/d3dxof/forward.c"
)

add_subdirectory(examples/convxfmt)
if(WIN32)
    add_subdirectory(examples/rmbegin1)
endif()

enable_testing()
add_test(NAME d3drm_test COMMAND d3drm_test)
