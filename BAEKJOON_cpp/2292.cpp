#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int number;
	cin >> number;
	if (number == 1)
	{
		cout << 1;
	}
	else
	{
		while (number > 1)
		{

			number -= count * 6;
			count++;
		}
		cout << count;
	}
}