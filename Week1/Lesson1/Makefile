CXX = g++
VARNAME = value
CXXFLAGS = -Wall -g
main: main.o Pair.o 
	$(CXX) $(CXXFLAGS) -o main main.o Pair.o
main.o: main.cpp Pair.h
	$(CXX) $(CXXFLAGS) -c main.cpp
Pair.o: Pair.h
