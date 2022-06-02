cmake_minimum_required(VERSION 3.1.0)
project(tictactoe)

set(CMAKE_CXX_STANDARD 11)

set(SRC_DIRECTORY src)
set(INCLUDE_DIRECTORY include)

set(SOURCES
    ${SRC_DIRECTORY}/board.cpp
    ${SRC_DIRECTORY}/helper.cpp
    ${SRC_DIRECTORY}/user.cpp
    ${SRC_DIRECTORY}/setting.cpp
    ${SRC_DIRECTORY}/wb.cpp
    ${SRC_DIRECTORY}/king.cpp
    ${SRC_DIRECTORY}/knight.cpp
    ${SRC_DIRECTORY}/pawn.cpp
    ${SRC_DIRECTORY}/pieces.cpp
    ${SRC_DIRECTORY}/plate.cpp
    ${SRC_DIRECTORY}/queen.cpp
    ${SRC_DIRECTORY}/rook.cpp
)

include_directories(${INCLUDE_DIRECTORY})
add_executable(${PROJECT_NAME}
    ${SRC_DIRECTORY}/main.cpp
    ${SOURCES})

target_link_libraries(${PROJECT_NAME}
    sfml-system
    sfml-window
    sfml-graphics)

