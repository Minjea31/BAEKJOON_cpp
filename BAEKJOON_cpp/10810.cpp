//10810¹ø
#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int set = 0;
	cin >> set >> count;
	int* list = new int[set] {0};

	int From = 0;
	int To = 0;
	int ball = 0;

	for (int i = 0; i < count; i++)
	{
		cin >> From >> To >> ball;
		for (int j = From; j < To+1; j++)
		{
			list[j-1] = ball;
		}
	}

	for (int i = 0; i < set; i++)
	{
		cout << list[i] <<' ';
	}
	delete[] list;
}