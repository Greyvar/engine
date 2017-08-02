cmake_minimum_required(VERSION 2.8)
cmake_policy(SET CMP0004 OLD)
project(Boleas)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${Boleas_SOURCE_DIR}/var/cmake-finders/")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)
set(BUILD_SHARED_LIBS off)
#set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")

include(FindPkgConfig)
find_package(SDL2 REQUIRED)
find_package(SDL2_ttf REQUIRED)

pkg_search_module(SDL2 required sdl2.a)
pkg_search_module(MINGW64 required mingw64)

file(GLOB SOURCE_FILES src/*.cpp src/*.hpp)
message("Source: ${SOURCE_FILES}") 
add_executable(boleas ${SOURCE_FILES})

set(CMAKE_VERBOSE_MAKEFILE on)

if (WINDOWS)
	target_link_libraries(boleas mingw32 SDL2main SDL2 m user32 gdi32 winmm)
	set_target_properties(boleas PROPERTIES LINK_SEARCH_END_STATIC 1)
else()
	target_link_libraries(boleas ${SDL2_LIBRARIES} ${SDL2_TTF_LIBRARIES})
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -std=c++11")

include_directories(src ${SDL2_INCLUDE_DIRS} ${SDL2_TTF_INCLUDE_DIRS})
link_directories(${SDL2_INCLUDE_DIRS} ${SDL2_TTF_INCLUDE_DIRS})
