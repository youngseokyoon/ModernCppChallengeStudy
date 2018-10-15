
cmake_minimum_required(VERSION 3.1)

project(ModernCppChallenge LANGUAGES CXX)

set(CMAKE_MODULE_PATH       ${CMAKE_SOURCE_DIR}/scripts)
set(ROOT_DIR                ${CMAKE_SOURCE_DIR})
set(CMAKE_INSTALL_PREFIX    ${CMAKE_SOURCE_DIR}/solved)

include(GetModules)

# Ch.1 
add_subdirectory(math/Problem1)
add_subdirectory(math/Problem2)
add_subdirectory(math/Problem3)
add_subdirectory(math/Problem4)
add_subdirectory(math/Problem5)
add_subdirectory(math/Problem6)
add_subdirectory(math/Problem7)
add_subdirectory(math/Problem8)
add_subdirectory(math/Problem9)
add_subdirectory(math/Problem10)
add_subdirectory(math/Problem11)
add_subdirectory(math/Problem12)
add_subdirectory(math/Problem13)
add_subdirectory(math/Problem14)

# add_subdirectory(language)      # Ch.2
# add_subdirectory(regex)         # Ch.3
# add_subdirectory(filesystem)    # Ch.4
# add_subdirectory(dateTime)      # Ch.5
# add_subdirectory(algorithm)     # Ch.6
# add_subdirectory(concurrency)   # Ch.7
# add_subdirectory(serialization) # Ch.9
# add_subdirectory(designPattern) # Ch.8
# add_subdirectory(archives)      # Ch.10
# add_subdirectory(database)      #
# add_subdirectory(images)        #
# add_subdirectory(cryptography)  # Ch.11

# add_subdirectory(extra)         # Bonus challenge!
