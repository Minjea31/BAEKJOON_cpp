#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int number;
	cin >> number;
	if (number == 1)
	{
		cout << "1/1";
		return 0;
	}
	else
	{
		while (number > 0)
		{

			number -= count;
			count++;
		}
	}

	if ((count - 1) % 2 == 0)
	{
		cout << number + count - 1 << "/" << count - (number + count - 1);
	}
	else if((count - 1) % 2 != 0)
		cout << count - (number + count - 1) << "/" << number + count - 1;
}