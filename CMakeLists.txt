cmake_minimum_required(VERSION 3.24)


project(CPP_Satellite)

add_executable(Starlink)
target_sources(Starlink PRIVATE src/starlink.cpp)


add_executable(Kuiper)
target_sources(Kuiper PRIVATE src/kuiper.cpp)