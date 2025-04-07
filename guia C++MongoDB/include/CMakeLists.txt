cmake_minimum_required(VERSION 3.10)
project(ProyectoMongoDB)

set(CMAKE_CXX_STANDARD 17)

# Incluir el MongoDB C++ Driver
find_package(libmongocxx REQUIRED)
find_package(libbsoncxx REQUIRED)

include_directories(${LIBMONGOCXX_INCLUDE_DIRS} ${LIBBSONCXX_INCLUDE_DIRS})

add_executable(ProyectoMongoDB src/main.cpp)

target_link_libraries(ProyectoMongoDB ${LIBMONGOCXX_LIBRARIES} ${LIBBSONCXX_LIBRARIES})