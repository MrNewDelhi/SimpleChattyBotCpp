cmake_minimum_required(VERSION 3.20)
project(SimpleChattyBotCpp)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory("${PROJECT_SOURCE_DIR}/IntegerTypesAndOperations/DifferenceOfTimes" "${PROJECT_SOURCE_DIR}/IntegerTypesAndOperations/DifferenceOfTimes/DifferenceOfTimesOutput")
add_subdirectory("${PROJECT_SOURCE_DIR}/IntegerTypesAndOperations/Snail" "${PROJECT_SOURCE_DIR}/IntegerTypesAndOperations/Snail/SnailOutput")
