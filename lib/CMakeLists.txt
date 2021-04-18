add_library(lib STATIC "lib.cpp" "lib.h")
target_compile_definitions(lib PRIVATE LIB_EXPORT)
set_property(TARGET lib PROPERTY CXX_STANDARD 20)