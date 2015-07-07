all: run

main.o: main.cpp
	gcc -pg -c main.cpp

quicksort.o: quicksort.cpp
	gcc -pg -c quicksort.cpp

utils.o: utils.cpp
	gcc -pg -c utils.cpp

run: main.o quicksort.o utils.o
	gcc -pg main.o quicksort.o utils.o -o run 

clean:
	rm main.o quicksort.o utils.o run
