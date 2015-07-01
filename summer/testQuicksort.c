#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "quicksort.h"
#include "utils.h"

int main(){
	int i;
	int array[10000];
	srand(time(NULL));

	for (i = 0; i < (10000-1); i++){
		array[i] = ( rand() % 100 ) + 1;
	}

	quicksort(array,0,(10000-1));

	quicksort(array1,0,(10000-1));

	return 0;
}