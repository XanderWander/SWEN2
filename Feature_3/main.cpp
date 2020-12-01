#include <iostream>
#include "MergeSort.h"
#include "HeapSort.h"
using namespace std;

int main() {
    int myarray[30],num;
    cout << "Enter number of elements to be sorted:";
    cin >> num;
    cout << "Enter " << num << " elements to be sorted:";
    for (int i = 0; i < num; i++) {
        cin >> myarray[i];
    }
	MergeSort sort(myarray,num);    //merge sort
    //HeapSort sort2(myarray,num);  //heap sort
    for (int i = 0; i < num; i++)
    {
        cout << myarray[i] << "\t";
    }

	return 0; 
}