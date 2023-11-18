cmake_minimum_required(VERSION 3.17)
project(leetcodecpp)

set(CMAKE_CXX_STANDARD 20)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


add_executable(lc1TwoSum ./src/main/exercise/LC1TwoSum.cpp)
add_executable(test_lc1TwoSum ./src/test/exercise/LC1TwoSumTest.cpp)
target_link_libraries(test_lc1TwoSum ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)

add_executable(swap ./src/main/exercise/swap.cpp)
add_executable(hashmap ./src/main/exercise/hashmap.cpp)

add_executable(lc242ValidAnagram ./src/main/exercise/LC242ValidAnagram.cpp)
add_executable(lc49GroupAnagrams ./src/main/exercise/LC49GroupAnagrams.cpp)

add_executable(validcoordinates ./src/main/exercise/validcoordinates.cpp)

add_executable(lc487maxconsecutiveones2 ./src/main/exercise/LC487MaxConsectiveOnes2.cpp)

add_executable(heap ./src/main/exercise/heap.cpp)

add_executable(LC3LongestSubstrNoRepeat ./src/main/exercise/LC3LongestSubstrNoRepeat.cpp)

add_executable(LC28FindIndexFirstOccurStr ./src/main/exercise/LC28FindIndexFirstOccurStr.cpp)

add_executable(twosortedlists ./src/main/exercise/twosortedlists.cpp)

add_executable(mystaticarray ./src/main/model/static_array.cpp)