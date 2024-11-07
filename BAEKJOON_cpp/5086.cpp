//5086¹ø
#include <iostream>
using namespace std;

int main()
{
	int num_1, num_2;
	cin >> num_1 >> num_2;

	while (num_1 != 0 && num_2 != 0)
	{
		if (num_2 % num_1 == 0)
		{
			cout << "factor" << "\n";
		}
		else if (num_1 % num_2 == 0)
		{
			cout << "multiple" << "\n";
		}
		else
		{
			cout << "neither" << "\n";
		}
		cin >> num_1 >> num_2;
	}
}