//10811¹ø
#include <iostream>
using namespace std;

int main()
{
	int set = 0;
	int size = 0;
	int num[100] = { 0 };

	int num_f = 0;
	int num_l = 0;

	cin >> size >> set;

	for (int i = 1; i <= size; i++)
	{
		num[i] = i;
	}

	while (set--)
	{
		cin >> num_f >> num_l;

		for (int i = 0; i <= (num_l - num_f) / 2; i++)
		{
			swap(num[num_f + i], num[num_l - i]);
		}
	}

	for (int i = 1; i <= size; i++)
	{
		cout << num[i] <<' ';
	}
}