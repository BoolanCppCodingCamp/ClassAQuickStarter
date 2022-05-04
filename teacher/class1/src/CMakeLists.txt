cmake_minimum_required(VERSION 3.0.0)
project(hello VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)

Include(FetchContent)

FetchContent_Declare(
   Catch2
   GIT_REPOSITORY https://github.com/catchorg/Catch2.git
   GIT_TAG        v3.0.0-preview3
)
FetchContent_MakeAvailable(Catch2)

set(CMAKE_CXX_CLANG_TIDY
  clang-tidy-10;
  -format-style='file';
  -checks=cppcoreguidelines*
  -header-filter=${CMAKE_CURRENT_SOURCE_DIR};
)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(hello main.cpp A.cpp)
add_executable(tests test.cpp A.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)