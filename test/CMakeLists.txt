add_executable(test test.cpp)
target_link_libraries(test lib)
target_include_directories(test PRIVATE ${CMAKE_SOURCE_DIR}/lib)
set_property(TARGET test PROPERTY CXX_STANDARD 20)