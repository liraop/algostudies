all: run

main.o: main.c
	gcc -g -pg -c main.c

quicksort.o: quicksort.c
	gcc -g -pg -c quicksort.c

utils.o: utils.c
	gcc -g -pg -c utils.c

run: main.o quicksort.o utils.o
	gcc -g -pg main.o quicksort.o utils.o -o run 

clean:
	rm main.o quicksort.o utils.o run