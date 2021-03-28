cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

project(TdExample VERSION 1.0 LANGUAGES CXX)

find_package(Td 1.7.0 REQUIRED)

add_executable(real-td.co td.cpp)
target_link_libraries(real-td.co PRIVATE Td::TdStatic)
set_property(TARGET real-td.co PROPERTY CXX_STANDARD 14)

add_executable(send-to-bot.co td_send.cpp)
target_link_libraries(send-to-bot.co PRIVATE Td::TdStatic)
set_property(TARGET send-to-bot.co PROPERTY CXX_STANDARD 14)

add_executable(get-result.co td_result.cpp)
target_link_libraries(get-result.co PRIVATE Td::TdStatic)
set_property(TARGET get-result.co PROPERTY CXX_STANDARD 14)

add_executable(start-new-game.co td_start.cpp)
target_link_libraries(start-new-game.co PRIVATE Td::TdStatic)
set_property(TARGET start-new-game.co PROPERTY CXX_STANDARD 14)

add_executable(unlimit-slots.co td_unlim_slot.cpp)
target_link_libraries(unlimit-slots.co PRIVATE Td::TdStatic)
set_property(TARGET unlimit-slots.co PROPERTY CXX_STANDARD 14)

add_executable(unlimit-slots-free.co td_unlim_slot_free.cpp)
target_link_libraries(unlimit-slots-free.co PRIVATE Td::TdStatic)
set_property(TARGET unlimit-slots-free.co PROPERTY CXX_STANDARD 14)
