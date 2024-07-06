#include <iostream>
using namespace std;

int main()
{
	int arr[100][100];
	int count;
	cin >> count;
	int x = 0, y = 0;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			arr[i][j] = 0;
		}
	}

	for (int i = 0; i < count; i++)
	{
		cin >> x >> y;
		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				arr[j][k] = 1;
			}
		}
	}
	
	int sum = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] == 0)
			{
				sum += 1;
			}
		}
	}

	cout << 10000 - sum;
}