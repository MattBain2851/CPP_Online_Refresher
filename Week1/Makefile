CXX = g++
VARNAME = value
CXXFLAGS = -Wall -g
main: main.o Example.o 
	$(CXX) $(CXXFLAGS) -o main main.o Example.o
main.o: main.cpp Example.h
	$(CXX) $(CXXFLAGS) -c main.cpp
Example.o: Example.h
