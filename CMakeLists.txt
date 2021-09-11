cmake_minimum_required(VERSION 3.17)
project(TemplatePattern)

set(CMAKE_CXX_STANDARD 17)

add_library(Binance INTERFACE Binance.h)
add_library(Coinbase INTERFACE Coinbase.h)
add_library(MinMaxTrader INTERFACE MinMaxTrader.h)
add_library(AverageTrader INTERFACE AverageTrader.h)
add_library(TradingBot TradingBot.h TradingBot.cpp)

add_executable(App main.cpp)
target_link_libraries(App TradingBot)