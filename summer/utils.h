#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

#ifndef _utils_h
#define _utils_h

void printIntArray(int *a, int arrayLength);
int compare (const void * a, const void * b);
std::vector<std::vector<int> > readCSV(std::string filename);
void printIntDoubleVector(std::vector<std::vector<int> > a);
void printIntVector(std::vector<int> a);
std::vector<int> parseCSVtoVector(std::string filename);


#endif