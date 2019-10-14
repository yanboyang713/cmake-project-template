cmake_minimum_required(VERSION 3.2)
project(yby C CXX)

set(SOURCE_FILES
    yby.h
    yby.cpp
)

add_subdirectory(random)


add_library(yby SHARED STATIC ${SOURCE_FILES})
target_link_libraries(yby
  PRIVATE
  random)

install(TARGETS yby DESTINATION ${DIVISIBLE_INSTALL_LIB_DIR})
install(FILES yby.h DESTINATION ${DIVISIBLE_INSTALL_INCLUDE_DIR})
