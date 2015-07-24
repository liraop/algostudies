#include <cstdio>
#include <cstdlib>
#include <vector>
#include "MyQuickSort.h"
#include "utils.h"

 MyQuickSort::MyQuickSort()
  {

  } 

void MyQuickSort::Sort(std::vector<int> a, int beg, int end)
{
  if(beg<end){
    int p = Partition(a, beg,end);                       
    Sort(a,beg,p-1);
    Sort(a,p+1,end);
  }
}

int MyQuickSort::Partition(std::vector<int> a, int end, int beg){
    int pivot = a[end];

    while ( beg < end )
    {
        while ( a[beg] < pivot )
            beg++;

        while ( a[end] > pivot )
            end--;

        if ( a[beg] == a[end] )
            beg++;
        else if ( beg < end )
        {
            int tmp = a[beg];
            a[beg] = a[end];
            a[end] = tmp;
        }
    }

    return end;
}