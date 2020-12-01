#pragma once
class MergeSort
{
public:
	MergeSort(int[],int);
	~MergeSort();
	void merge_sort(int* arr, int low, int high);
	void merge(int* arr, int low, int high, int mid);
private:

};

