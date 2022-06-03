cmake_minimum_required(VERSION 3.23)

project(HelloWorldBin
        VERSION 0.0.1
        DESCRIPTION "THe leading Hello World App"
        LANGUAGES CXX
)

add_executable(${PROJECT_NAME} ./src/main.cpp)
target_compile_features(HelloWorldBin PRIVATE cxx_std_20)

# install(TARGETS "${PROJEKT_NAME}" DESTINATION bin)  #${CMAKE_INSTALL_PREFIX}/bin
# install(FILES "man.cpp" DESTINATION src)            #${CMAKE_INSTALL_PREFIX}/src

