#include <iostream>
using namespace std;

int main()
{
	int size = 0;
	cin >> size;
	int* num = new int[size];

	for (int i = 1; i <= size; i++)
	{
		cin >> num[i];
	}

	int Max = -1000000;
	int Min = 1000000;

	for (int i = 1; i <= size; i++)
	{
		if (Max < num[i])
		{
			Max = num[i];
		}

		if (Min > num[i])
		{
			Min = num[i];
		}
	}

	cout << Min << ' ' << Max;
	delete[] num;
}