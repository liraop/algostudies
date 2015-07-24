#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
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

//////////
void loadBinarySequence(std::string filename, std::vector<std::pair<int, int> >& seq){
  std::ifstream fin(filename.c_str(), std::ios::binary);
  if(fin.good() == false){
    return;
  }
  long long len;
  fin.read((char *) &len, sizeof(long long));
  for(long long i = 0; i < len; ++i){
    int first;
    int second;
    fin.read((char *) &first, sizeof(int));
    fin.read((char *) &second, sizeof(int));
    seq.push_back(std::pair<int, int>(first, second));
  }
  fin.close();
}

void loadBinarySequence(std::string filename, std::vector<double>& seq){
  std::ifstream fin(filename.c_str(), std::ios::binary);
  if(fin.good() == false){
    return;
  }
  long long len;
  fin.read((char *) &len, sizeof(long long));
  for(long long i = 0; i < len; ++i){
    double value;
    fin.read((char *) &value, sizeof(double));
    seq.push_back(value);
  }
  fin.close();
}

void loadBinarySequence(std::string filename, std::vector<int>& seq){
  std::ifstream fin(filename.c_str(), std::ios::binary);
  if(fin.good() == false){
    return;
  }
  long long len;
  fin.read((char *) &len, sizeof(long long));
  for(long long i = 0; i < len; ++i){
    int value;
    fin.read((char *) &value, sizeof(int));
    seq.push_back(value);
  }
  fin.close();
}

std::vector<std::vector<int> > readCSV(std::string filename)
{
    std::vector<std::vector<int> > contents;
    std::ifstream csv (filename.c_str());
    std::string line;
    while(getline(csv, line))
    {
        contents.push_back( std::vector<int>());
        std::vector<int>& line_contents = contents[contents.size()-1];
        std::istringstream iss(line);
        do
        {
            int value;
            if( iss >> value )
            {
                line_contents.push_back(value);
            } else {
                line_contents.push_back( 0 );
                iss.clear();
            }	
            std::string fieldend;
            getline(iss, fieldend, ',');
        } while(!iss.eof());
    }

    return contents;
}

std::vector<int> parseCSVtoVector(std::string filename)
{
    std::vector<int> contents;
    std::ifstream csv (filename.c_str());
    std::string line;
    while(getline(csv, line))
    {
        std::istringstream iss(line);
        do
        {
            int value;
            if( iss >> value )
            {
                contents.push_back(value);
            } else {
                contents.push_back( 0 );
                iss.clear();
            }	
            std::string fieldend;
            getline(iss, fieldend, ',');
        } while(!iss.eof());
    }

    return contents;
}


void printIntDoubleVector(std::vector<std::vector<int> > a){
	for(size_t i=0; i<a.size(); ++i)
    {
        for(size_t j=0; j<a[i].size(); ++j)
        {
            std::cout << a[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

void printIntVector(std::vector<int> a){
	for(size_t i=0; i<a.size(); ++i)
    {
            std::cout << a[i]<< "\t";
    }
    std::cout << std::endl;
}