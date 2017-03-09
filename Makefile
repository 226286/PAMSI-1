__start__: a.out
	./a.out
a.out: main.o
	g++ main.o
main.o: main.cpp
	g++ -c -Wall -pedantic main.cpp
