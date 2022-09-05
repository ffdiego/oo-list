all: Stack.hpp Queue.hpp List.hpp main.cpp
	g++ main.cpp -o list.out
	./list.out