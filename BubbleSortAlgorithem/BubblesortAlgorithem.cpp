#include <iostream>

using namespace std;

int main()
{
	int a[10] = { 5,4,1,6,3,5,8,4,2,3 };
	int count;

	while (1)
	{
		count = 0;
		for ( int i = 0; i < 9; i++)
		{
			if ( a[i] > a[i + 1] )
			{
				int temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				count++;
			}
		}
		if ( count == 0 )
		{
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	cout << "end" << endl;

	return 0;
}
