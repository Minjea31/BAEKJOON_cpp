//2798¹ø
#include <iostream>
using namespace std;

int main()
{
	int x, sum;
	cin >> x >> sum;
	int MAX = 0;

	int* num = new int[x];
	for (int i = 0; i < x; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < x - 2; i++)
	{
		for (int j = i + 1; j < x - 1; j++)
		{
			for (int k = j + 1; k < x; k++)
			{
				if (num[i] + num[j] + num[k] <= sum)
				{
					if (sum - (num[i] + num[j] + num[k]) <= sum - MAX)
					{
						MAX = num[i] + num[j] + num[k];
					}
				}
			}
		}
	}

	cout << MAX;
	delete[] num;
}