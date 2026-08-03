cmake_minimum_required(VERSION 3.10)

project(URLShortener)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(URLShortener
    src/main.cpp
    src/Base62.cpp
    src/UrlService.cpp
    src/Database.cpp
    src/RedisCache.cpp
)
