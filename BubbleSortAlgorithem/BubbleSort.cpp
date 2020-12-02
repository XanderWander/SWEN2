#include "BubbleSort.h"
#include <iostream>

using namespace std;

BubbleSort::BubbleSort()
{

}

BubbleSort::~BubbleSort()
{

}

void BubbleSort::sorting()
{
	int count;

	while (1)
	{
		count = 0;
		for (int i = 0; i < 4; i++)
		{
			if (numberArray[i] > numberArray[i + 1])
			{
				int temp = numberArray[i];
				numberArray[i] = numberArray[i + 1];
				numberArray[i + 1] = temp;
				count++;
			}
		}
		if (count == 0)
		{
			break;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << numberArray[i] << endl;
	}
	cout << "end" << endl;
}
