#include <iostream>

using namespace std;

int main()
{
	//int a[10] = { 5,4,1,6,3,5,8,4,2,3 }; int max = 9;
	char a[10] = "hagrewjag"; int max = 8;

	int count;

	while (1)
	{
		count = 0;
		for (int i = 0; i < max; i++)
		{
			if (a[i] > a[i + 1])
			{
				auto temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				count++;
			}
		}
		if (count == 0)
		{
			break;
		}
	}

	for (int i = 0; i < max + 1; i++)
	{
		cout << a[i] << endl;
	}
	cout << "end" << endl;

	return 0;
}

