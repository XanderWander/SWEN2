#include "Sorting.h"

#include "HeapSort.h"
#include "MergeSort.h"

#include <string>
#include <iostream>
#include <sstream>

Sorting::Sorting()
{
	amount = 0;
	status = "";
}

Sorting::~Sorting()
{

}

void Sorting::selectArray()
{
	int returnValue = 0;

	cout << "Do you want to sort letters or numbers?\n Type c for charakters and n for numbers : ";
	getline(cin, status);

}

void Sorting::getArray()
{
	string str;

	selectArray();

	if ( status == "n" )
	{
		cout << "insert the Amount of numbers\n";
	}
	if ( status == "c")
	{
		cout << "insert the Amount of charakters\n";
	}

	getline(std::cin, str);
	amount = stoi(str);

	for (int i = 0; i < amount; i++) 
	{
		if (status == "n")
		{
			cout << "number " << i+1 << ":";
			getline(cin, str);
			numberArray[i] = stoi(str);
		}

		if (status == "c")
		{
			cout << "charakter " << i+1 << ":";
			getline(cin, str);
			string strConverter(str);
			charArray[i] = strConverter[0];
		}
	}

	if (status == "n")
	{
		printArray(1);
	}
	if (status == "c")
	{
		printArray(2);
	}

}

void Sorting::printArray( int print )
{
	for (int i = 0; i < amount; i++)
	{
		if ( print == 1 )
		{
			cout << numberArray[i] << endl;
		}
		if ( print == 2 )
		{
			cout << charArray[i] << endl;
		}
	}
}

void Sorting::selectSort()
{
	string sortType;

	cout << "How do you want to sort the array's\n For the Bubblesort algorithm type b for the merge type m and for heap type h :\n";
	getline(cin, sortType);

	if ( sortType == "b" )
	{
		bubbleSort();
	}
	if ( sortType == "m" )
	{
		if (status == "n")
		{
			mergeSort();
		}
		else
		{
			cout << "Comming next release ;)\n\n\n\n";
		}
	}
	if (sortType == "h")
	{
		if (status == "n")
		{
			heapSort();
		}
		else
		{
			cout << "Comming next release ;)\n\n\n\n";
		}
	}
}

void Sorting::bubbleSort()
{
	int count;

	while (1)
	{
		count = 0;
		for (int i = 0; i < amount-1; i++)
		{
			if (status == "c" )
			{
				if (charArray[i] > charArray[i + 1])
				{
					char temp = charArray[i];
					charArray[i] = charArray[i + 1];
					charArray[i + 1] = temp;
					count++;
				}
			}

			if (status == "n")
			{
				if (numberArray[i] > numberArray[i + 1])
				{
					int temp = numberArray[i];
					numberArray[i] = numberArray[i + 1];
					numberArray[i + 1] = temp;
					count++;
				}
			}
			
		}
		if (count == 0)
		{
			break;
		}
	}

	if (status == "n")
	{
		printArray( 1 );
	}
	if (status == "c")
	{
		printArray( 2 );
	}
}

void Sorting::mergeSort()
{
	MergeSort sort(numberArray, amount);  
	
}

void Sorting::heapSort()
{
	HeapSort sort2(numberArray, amount);
}

