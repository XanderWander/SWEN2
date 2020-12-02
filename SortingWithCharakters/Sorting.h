#pragma once
#include <string>

using namespace std;

class Sorting
{
private:
	int numberArray[100] = {};
	char charArray[100] = {};
	int amount;
	string status;

public:
	Sorting();
	virtual ~Sorting();

	

public:
	void selectArray();
	void getArray();
	void printArray( int print );
	void selectSort();
	void bubbleSort();
	void heapSort();
	void mergeSort();
	


};

