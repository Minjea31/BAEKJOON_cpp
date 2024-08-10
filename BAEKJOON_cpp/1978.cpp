#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;

	while (n--)
	{
		int num;
		cin >> num;
		if (num != 1 && num != 2)
		{
			for (int i = 2; i < num; i++)
			{
				if (num % i == 0)
					break;
				else if (i == num - 1)
					count += 1;
			}
		}
		else if (num == 2)
			count += 1;
	}
	cout << count;
}