#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "quicksort.h"
#include "utils.h"

void tstQsort(){
	int i;
	int array[10000];
	srand(time(NULL));

	for (i = 0; i < (10000-1); i++){
		array[i] = ( rand() % 100 ) + 1;
	}
	qsort(array,(10000-1),sizeof(int),compare);
	qsort(array,(10000-1),sizeof(int),compare);
}

int main(){
	
	printf("Running qsort tests...");
	tstQsort();
	printf("Done.\n");

	printf("Running quicksort tests...");
	tstQuicksort();
	printf("Done.\n");

	return 0;	
}