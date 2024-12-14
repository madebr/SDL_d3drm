add_executable(convxfmt
    convxfmt.c
)
target_link_libraries(convxfmt PRIVATE d3dxof-forward SDL3::SDL3)
