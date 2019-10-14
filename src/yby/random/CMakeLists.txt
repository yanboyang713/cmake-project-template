cmake_minimum_required(VERSION 3.2)
project(random C CXX)

set(SOURCE_FILES
  random.cpp
  random.h
)

#add_library(random SHARED STATIC ${SOURCE_FILES})
add_library(random SHARED STATIC "")

target_sources(random
  PRIVATE
    random.cpp

  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/random.h
  )

install(TARGETS random DESTINATION ${DIVISIBLE_INSTALL_LIB_DIR})

message(WARNING ${DIVISIBLE_INSTALL_INCLUDE_DIR})
install(FILES random.h DESTINATION ${DIVISIBLE_INSTALL_INCLUDE_DIR})
