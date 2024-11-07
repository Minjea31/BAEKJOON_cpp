//3052¹ø
#include <iostream>
using namespace std;

int main()
{
	int* list = new int[10] {0};
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		int num = 0;
		cin >> num;
		list[i] = num % 42;
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (list[i] == list[j])
			{
				list[j] = -1;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (list[i] >= 0)
			count += 1;
	}

	cout << count;
	delete[] list;
}