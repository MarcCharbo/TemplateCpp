cmake_minimum_required(VERSION 3.7)
set(CMAKE_CXX_STANDARD 11)
set( CMAKE_VERBOSE_MAKEFILE on )

project(TemplateAssignment)

# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src
        ${CMAKE_BINARY_DIR}/googletest-build)



# Now simply link against gtest or gtest_main as needed. Eg
set(SOURCE_FILES main.cpp)
add_executable(TemplateAssignment ${SOURCE_FILES})
target_link_libraries(TemplateAssignment gtest_main)
add_test(NAME example_test COMMAND TemplateAssignment)


