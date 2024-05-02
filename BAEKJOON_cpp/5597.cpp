#include <iostream>
using namespace std;

int main()
{
	int* list = new int[30] {0};
	int Who;

	for (int i = 0; i < 28; i++)
	{
		cin >> Who;
		list[Who - 1] += 1;
	}


	for (int i = 0; i < 30; i++)
	{
		if (list[i] == 0)
		{
			cout << i + 1 << '\n';
		}
	}
}