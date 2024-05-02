#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int set = 0;
	cin >> set >> count;
	int* list = new int[set];

	for (int i = 0; i < set; i++)
	{
		list[i] = i+1;
	}


	int From = 0;
	int To = 0;

	for (int i = 0; i < count; i++)
	{
		cin >> From >> To;
		
		int temp = 0;
		temp = list[From - 1];
		list[From - 1] = list[To - 1];
		list[To - 1] = temp;
	}

	for (int i = 0; i < set; i++)
	{
		cout << list[i] << ' ';
	}
	delete[] list;
}