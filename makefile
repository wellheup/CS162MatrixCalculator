


CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += O3
#LDFLAGS = -lboost_date_time

OBJS = main.o readMatrix.o findDeterminant.o

SRCS = readMatrix.cpp findDeterminant.cpp main.cpp

HEADERS = readMatrix.hpp findDeterminant.hpp 

main: ${OBJS} ${HEADERS}
	${CXX}  ${OBJS} -o main

#${OBJS}: ${SRCS}
#	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
