cmake_minimum_required(VERSION 3.17)
project(cpp_lab_four)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_lab_four "Source Files/main.cpp" "Source Files/Game.cpp" "Header Files/Game.h" "Source Files/Player.cpp" "Header Files/Player.h" "Source Files/Dealer.cpp" "Header Files/Dealer.h" "Source Files/Card.cpp" "Header Files/Card.h" "Source Files/Deck.cpp" "Header Files/Deck.h" Hand.cpp Hand.h)