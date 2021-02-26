cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_MODULE_PATH "${CMAKE_BINARY_DIR};${CMAKE_MODULE_PATH}")

project(SFMLExample)

set(PROJECT_NAME, "SFMLEXE")

set(HEADERS
	inc/EventLoop.h)

set(SOURCES
	src/main.cpp
	src/EventLoop.cpp)
	
add_executable(${PROJECT_NAME}
	${HEADERS}
	${SOURCES})
	
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17)

target_include_directories(${PROJECT_NAME}
	PUBLIC inc)
	
find_package(sfml REQUIRED)
if (sfml_FOUND)
	target_compile_definitions(${PROJECT_NAME} PRIVATE ${sfml_DEFINITIONS})
	target_include_directories(${PROJECT_NAME} PRIVATE ${sfml_INCLUDE_DIRS})
	target_link_libraries(${PROJECT_NAME} PRIVATE ${sfml_LIBRARIES})
endif (sfml_FOUND)
