#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void printIntArray(int a[], int arrayLength){
		int i;
		for (i = 0; i <= arrayLength; i++){
			printf("%d, ", a[i]);

		}
		printf("\n");
	}

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
