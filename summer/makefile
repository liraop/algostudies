all: run

main.o: main.cpp
	gcc -arch i386 -pg -c main.cpp

quicksort.o: quicksort.cpp
	gcc -arch i386 -pg -c quicksort.cpp

utils.o: utils.cpp
	gcc -arch i386 -pg -c utils.cpp

run: main.o quicksort.o utils.o
	gcc -arch i386 -pg main.o quicksort.o utils.o -o run 

clean:
	rm main.o quicksort.o utils.o run