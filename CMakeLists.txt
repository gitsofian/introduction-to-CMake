cmake_minimum_required(VERSION 3.23)

project(HelloWorldBin
        VERSION 0.0.1
        DESCRIPTION "THe leading Hello World App"
        LANGUAGES CXX
)


#GLOBING
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(HelloWorldBin main.cpp ${SOURCE_FILES})

target_compile_features(HelloWorldBin PRIVATE cxx_std_20)

target_include_directories(HelloWorldBin PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# install(TARGETS "${PROJEKT_NAME}" DESTINATION bin)  #${CMAKE_INSTALL_PREFIX}/bin
# install(FILES "man.cpp" DESTINATION src)            #${CMAKE_INSTALL_PREFIX}/src
