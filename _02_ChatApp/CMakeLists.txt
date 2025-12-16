cmake_minimum_required(VERSION 3.10)
project(_02_ChatApp)

set(CMAKE_CXX_STANDARD 17)

# 1. 指定头文件所在的目录
# 这样你在代码里写 #include "my_functions.h" 就能找到了
include_directories(client)
include_directories(server)
include_directories(tcp)

# 2. 搜集所有的源文件
# 建议手动列出，或者使用 file(GLOB_RECURSE ...) 递归搜索 src 目录
file(GLOB_RECURSE SOURCES 
    "client/*.cpp"
    "server/*.cpp"
    "tcp/*.cpp"
    "main.cpp")

# 3. 生成可执行文件
add_executable(ChatApp ${SOURCES})