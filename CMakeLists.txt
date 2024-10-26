cmake_minimum_required(VERSION 3.5)

project(03_03_Tape_Equilibrium LANGUAGES C)

add_executable(03_03_Tape_Equilibrium main.c)

include(GNUInstallDirs)
target_link_libraries(${PROJECT_NAME} -lunity)
install(TARGETS 03_03_Tape_Equilibrium
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
