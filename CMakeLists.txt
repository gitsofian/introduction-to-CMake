cmake_minimum_required(3.23)

project(HelloWorld)



add_executable("${PROJEKT_NAME}" "main.cpp")
install(TARGETS "${PROJEKT_NAME}" DESTINATION bin)  #${CMAKE_INSTALL_PREFIX}/bin
install(FILES "man.cpp" DESTINATION src)            #${CMAKE_INSTALL_PREFIX}/src
