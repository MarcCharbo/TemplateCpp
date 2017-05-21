#https://github.com/google/googletest/blob/master/googletest/README.md
cmake_minimum_required(VERSION 3.7)

project(googletest-download NONE)

include(ExternalProject)
ExternalProject_Add(googletest
  GIT_REPOSITORY    https://github.com/google/googletest.git
  GIT_TAG           master
  SOURCE_DIR        "/Users/charbo/Documents/WU/CPP/Class2/TemplateAssignment/cmake-build-debug/googletest-src"
  BINARY_DIR        "/Users/charbo/Documents/WU/CPP/Class2/TemplateAssignment/cmake-build-debug/googletest-build"
  CONFIGURE_COMMAND ""
  BUILD_COMMAND     ""
  INSTALL_COMMAND   ""
  TEST_COMMAND      ""
)
