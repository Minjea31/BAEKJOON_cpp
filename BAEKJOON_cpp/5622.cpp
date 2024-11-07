//5622¹ø
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sen;
	cin >> sen;

	int sum_time = 0;

	for (int i = 0; i < sen.length(); i++)
	{
		int alpha;
		alpha = sen[i];
		switch (alpha)
		{
		case 90: case 89: case 88: case 87:
		{
			sum_time += 10;
			break;
		}
		case 86: case 85: case 84:
		{
			sum_time += 9;
			break;
		}
		case 83: case 82: case 81: case 80:
		{
			sum_time += 8;
			break;
		}
		case 79: case 78: case 77:
		{
			sum_time += 7;
			break;
		}
		case 76: case 75: case 74:
		{
			sum_time += 6;
			break;
		}
		case 73: case 72: case 71:
		{
			sum_time += 5;
			break;
		}
		case 70: case 69: case 68:
		{
			sum_time += 4;
			break;
		}
		case 67: case 66: case 65:
		{
			sum_time += 3;
			break;
		}
		}
	}

	cout << sum_time;
}