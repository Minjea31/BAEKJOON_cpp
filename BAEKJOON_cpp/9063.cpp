#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int* x = new int[num];
	int* y = new int[num];

	if (num == 1)
	{
		cin >> x[0] >> y[0];
		cout << 0;
		return 0;
	}

	for (int i = 0; i < num; i++)
	{
		cin >> x[i] >> y[i];
	}

	int Min_x = x[0], Max_x = x[0], Min_y = y[0], Max_y = y[0];
	for (int i = 0; i < num; i++)
	{
		if (x[i] < Min_x)
			Min_x = x[i];
		if (Max_x < x[i])
			Max_x = x[i];
		if (y[i] < Min_y)
			Min_y = y[i];
		if (Max_y < y[i])
			Max_y = y[i];
	}

	cout << (Max_x - Min_x) * (Max_y - Min_y);

	delete[] x;
	delete[] y;
}