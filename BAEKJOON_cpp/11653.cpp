#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	if (num == 1)
	{
		return 0;
	}

	while (true)
	{
		for (int i = 2; 0 < i; i++)
		{
			if (num % i == 0)
			{
				num = num / i;
				cout << i << endl;
				i--;
			}
			if (num == 1)
			{
				return 0;
			}
		}
	}
}