# Build procedure:
#   cd atm_cpp14/
#   mkdir build/
#   cd build/
#   cmake ..
#   make clean all
# or
#   make clean all VERBOSE=1
# 


cmake_minimum_required(VERSION 3.11)

message(STATUS " ... STARTING ...")

set(TARGET_NAME ATM_Cpp14_lib)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(${TARGET_NAME}
  LANGUAGES CXX
  VERSION "1.0.0"
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_VERBOSE_MAKEFILE ON)

if(CPPTEST_COVERAGE)
  include(cpptest-coverage.cmake)
endif()

set(SRC_FILES
  ./src/Account.cxx
  ./src/ATM.cxx
  ./src/Bank.cxx
  ./src/BaseDisplay.cxx
)

set(INCLUDE_DIRS
  ./
  ./include
)

message(STATUS "SRC_FILES: ${SRC_FILES}")
message(STATUS "INCLUDE_DIRS: ${INCLUDE_DIRS}")

add_library(${TARGET_NAME} STATIC ${SRC_FILES})
set_target_properties(${TARGET_NAME} PROPERTIES
  CXX_EXTENSIONS OFF
  CXX_STANDARD 14
  CXX_STANDARD_REQUIRED ON
  LINKER_LANGUAGE CXX
)

target_include_directories(${TARGET_NAME}
  PUBLIC ${INCLUDE_DIRS}
)

#set_target_properties(${TARGET_NAME} PROPERTIES VS_USER_PROPS "$(SolutionDir)\\parasoft-coverage.props}")

option(ENABLE_GT_TESTS "Enable GoogleTest tests" ON)
message(STATUS "Enable GoogleTest: ${ENABLE_UNIT_TESTS}")

if(ENABLE_GT_TESTS)
  include(FetchContent)

  FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.10.0
  )

  FetchContent_GetProperties(googletest)

  if(NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
    # Prevent GoogleTest from overriding our compiler/linker options when building with Visual Studio
    # set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    # Prevent GoogleTest from using PThreads
    set(gtest_disable_pthreads ON CACHE BOOL "" FORCE)
    # adds the targers: gtest, gtest_main, gmock, gmock_main
    add_subdirectory(
      ${googletest_SOURCE_DIR}
      ${googletest_BINARY_DIR}
    )
    # Silence std::tr1 warning on MSVC
    # if(MSVC)
    #   foreach(_tgt gtest gtest_main gmock gmock_main)
    #     target_compile_definitions(${_tgt}
    #       PRIVATE
    #         "_SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING"
    #       )
    #   endforeach()
    # endif()
  endif()

  add_executable(atm_gtest "")
  target_sources(atm_gtest
    PRIVATE
      tests/gt/gtest_main.cpp
  )
  target_link_libraries(atm_gtest
    PRIVATE
      ${TARGET_NAME}
      gtest_main
  )

  enable_testing()
  add_test(
    NAME atm_gtest
    COMMAND $<TARGET_FILE:atm_gtest>
  )
endif()


