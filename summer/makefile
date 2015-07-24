all: run

main.o : main.cpp
	g++ -pg -c main.cpp

Tester.o: Tester.cpp
	g++ -pg -c Tester.cpp

MyQuickSort.o: MyQuickSort.cpp
	g++ -pg -c MyQuickSort.cpp

utils.o: utils.cpp
	g++ -pg -c utils.cpp

run: Tester.o MyQuickSort.o utils.o main.o
	g++ -pg Tester.o MyQuickSort.o utils.o main.o -o run

clean:
	rm Tester.o MyQuickSort.o utils.o main.o run