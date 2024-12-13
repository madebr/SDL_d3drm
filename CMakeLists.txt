cmake_minimum_required(VERSION 3.30)
project(SDL_d3drm C)

include(CheckLinkerFlag)

if(NOT MSVC)
    file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/dummy.sym" "n_0 {\n global:\n  func;\n local: *;\n};\n")
    check_linker_flag(C "-Wl,--version-script=${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/dummy.sym" HAVE_WL_VERSION_SCRIPT)
    check_linker_flag(C "-Wl,--error-unresolved-symbols" HAVE_WL_ERROR_UNRESOLVED_SYMBOLS)
endif()

find_package(SDL3 REQUIRED CONFIG)

if(MSVC)
    add_compile_options(/W3)
else()
    add_compile_options(-Wall -Wextra)
endif()

add_library(SDL_d3drm MODULE
    src/d3drm/d3drm.def
    src/d3drm/library.c
    src/d3drm/library.h
)
target_include_directories(SDL_d3drm PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")
set_property(TARGET SDL_d3drm PROPERTY PREFIX "")
set_property(TARGET SDL_d3drm PROPERTY OUTPUT_NAME "SDL_d3drm")
target_link_Libraries(SDL_d3drm PRIVATE SDL3::SDL3)
if(HAVE_WL_VERSION_SCRIPT)
    target_link_options(SDL_d3drm PRIVATE "-Wl,--version-script=${CMAKE_CURRENT_SOURCE_DIR}/src/d3drm/d3drm.sym")
    set_property(TARGET SDL_d3drm APPEND PROPERTY LINK_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/d3drm/d3drm.sym")
endif()
if(HAVE_WL_ERROR_UNRESOLVED_SYMBOLS)
    target_link_options(SDL_d3drm PRIVATE "-Wl,--error-unresolved-symbols")
endif()

add_library(SDL_d3drm-forward SHARED
    src/d3drm/d3drm.def
    src/d3drm/forward.c
)
target_include_directories(SDL_d3drm-forward PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include")
target_include_directories(SDL_d3drm-forward PRIVATE "src")
target_link_libraries(SDL_d3drm-forward PRIVATE ${CMAKE_DL_LIBS})
set_property(TARGET SDL_d3drm-forward PROPERTY OUTPUT_NAME "d3drm")
set_property(TARGET SDL_d3drm-forward APPEND PROPERTY BUILD_RPATH "$<TARGET_FILE_DIR:SDL_d3drm>")
if(WIN32)
    set_property(TARGET SDL_d3drm-forward PROPERTY PREFIX "")
endif()
if(HAVE_WL_VERSION_SCRIPT)
    target_link_options(SDL_d3drm-forward PRIVATE "-Wl,--version-script=${CMAKE_CURRENT_SOURCE_DIR}/src/d3drm/d3drm.sym")
    set_property(TARGET SDL_d3drm-forward APPEND PROPERTY LINK_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/d3drm/d3drm.sym")
endif()
if(HAVE_WL_ERROR_UNRESOLVED_SYMBOLS)
    target_link_options(SDL_d3drm-forward PRIVATE "-Wl,--error-unresolved-symbols")
endif()

add_executable(d3drm_test
    src/d3drm/test/test.c
)
target_include_directories(d3drm_test PRIVATE "include")
target_link_libraries(d3drm_test PRIVATE SDL_d3drm-forward)
target_link_libraries(d3drm_test PRIVATE SDL3::SDL3_test SDL3::SDL3)

enable_testing()
add_test(NAME d3drm_test COMMAND d3drm_test)
