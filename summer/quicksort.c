#include "quicksort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

void quicksort(int array[], int startIndex, int arrayLength){
	int i = startIndex, j = arrayLength;
    int tmp;
    int pivot = array[(startIndex+arrayLength) / 2];

    while (i <= j) {
        while (array[i] < pivot)
            i++;
            while (array[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = array[i];		
                  array[i] = array[j];
                  array[j] = tmp;
                  i++;
                  j--;
	}
      };
      if (startIndex < j)
            quicksort(array, startIndex, j);
      if (i < arrayLength)
            quicksort(array, i, arrayLength);
}

void tstQuicksort(){
	int i;
	int array[10000];
	srand(time(NULL));

	for (i = 0; i < (10000-1); i++){
		array[i] = ( rand() % 100 ) + 1;
	}

	quicksort(array,0,(10000-1));

	quicksort(array,0,(10000-1));
}