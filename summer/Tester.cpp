#include <string>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <algorithm>
#include <iostream>
#include <vector>
#include "Tester.h"
#include "MyQuickSort.h"
#include "utils.h"

using namespace std;

void testQsort(std::string input_filename){
	std::vector<int> unsorted =  parseCSVtoVector(input_filename);

 	printf("Running qsort tests...");
	std::sort(unsorted.begin(), unsorted.end());
	printIntVector(unsorted);

	printf("Done.\n");

}

void testQuickSort(std::string input_filename){
	MyQuickSort sorter;
	std::vector<int> * unsorted =  parseCSVtoVector(input_filename);
		
	printf("Running quicksort tests...");
	
	sorter.Sort(unsorted, 0, unsorted.size()-1);
	
	printIntVector(unsorted);
		
	printf("Done.\n");
}


int runTests(){

	//testQsort("10000.txt");
	testQuickSort("10000.txt");

	return 0;
}