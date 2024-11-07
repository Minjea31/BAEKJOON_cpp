//10101¹ø
#include <iostream>
using namespace std;

int main()
{
	int angle[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> angle[i];
	}

	if (angle[0] + angle[1] + angle[2] == 180)
	{
		if (angle[0] == angle[1] && angle[1] == angle[2])
		{
			cout << "Equilateral";
		}
		else if (angle[0] == angle[1] || angle[1] == angle[2] || angle[0] == angle[2])
			cout << "Isosceles";
		else
			cout << "Scalene";
	}
	else
		cout << "Error";
}