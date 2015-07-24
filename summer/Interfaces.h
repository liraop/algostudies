#pragma once

#include <cstdlib>
#include <vector>

struct QuickSort {
  virtual void Sort(std::vector<int>  a, int beg, int end) = 0;
  virtual int Partition(std::vector<int> a, int beg, int end) = 0;
};