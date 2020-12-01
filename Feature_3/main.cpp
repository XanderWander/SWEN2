#include <iostream>
#include "MergeSort.h"
using namespace std;

int main() {
    int myarray[30],num;
    cout << "Enter number of elements to be sorted:";
    cin >> num;
    cout << "Enter " << num << " elements to be sorted:";
    for (int i = 0; i < num; i++) {
        cin >> myarray[i];
    }
	MergeSort sort(myarray,num);
	return 0; 
}