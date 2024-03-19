cmake_minimum_required(VERSION 3.5)
project(pybind)

# Set C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Python
find_package(Python COMPONENTS Development)

set(EXECUTABLE_NAME ugldriver)

add_executable(${EXECUTABLE_NAME} driver.cpp)

target_include_directories(${EXECUTABLE_NAME} PRIVATE ${Python_INCLUDE_DIRS} ./include)

target_link_libraries(${EXECUTABLE_NAME} PRIVATE ${Python_LIBRARIES})

#if(Python_FOUND)
#    message(STATUS "Python found: ${Python_EXECUTABLE}")
#    message(STATUS "Python version: ${Python_VERSION}")
#    message(STATUS "Python include directories: ${Python_INCLUDE_DIRS}")
#    message(STATUS "Python libraries: ${Python_LIBRARIES}")
#else()
#    message(FATAL_ERROR "Python not found.")
#endif()
