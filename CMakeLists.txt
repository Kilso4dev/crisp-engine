cmake_minimum_required(VERSION 3.1)
project( renderer )

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -lm -g")


file(GLOB CRISP_FILES
	"src/*.h"
	"src/*.cpp"
	)
file(GLOB ADAPTER_FILES
	"src/adapters/*.cpp"
	"src/adapters/*.h"
	)
file(GLOB UTIL_FILES
    "src/util/*.cpp"
    "src/util/*.h"
    )

add_executable(core crisp.cpp ${CRISP_FILES} ${ADAPTER_FILES} ${UTIL_FILES})

find_package(Vulkan REQUIRED)
target_link_libraries(core vulkan)

find_package(glfw3 3.3 REQUIRED)
target_link_libraries(core glfw)

find_package(glm REQUIRED)
target_link_libraries(core glm)


# message( ${CRISP_FILES} )


#add_executable(binary-tests tests/binary_tests.cpp ${UTIL_FILES})
#target_link_libraries(binary-tests glfw)


#add_executable(bmp-tests tests/bmp_adapter_test.cpp ${UTIL_FILES} ${ADAPTER_FILES})
#target_link_libraries(binary-tests glfw)
