#include "Interfaces.h"
#include <cstdlib>
#include <vector>

#ifndef _MyQuickSort_h
#define _MyQuickSort_h

class MyQuickSort : public QuickSort
{	
	public :
	MyQuickSort();
	void Sort(std::vector<int> * a, int beg, int end);
	int Partition(std::vector<int> * a, int beg, int end);
};

#endif