//1546¹ø
#include <iostream>
using namespace std;

int main()
{
	int set = 0;
	cin >> set;

	float score[1000] = { 0 };

	for (int i = 1; i <= set; i++)
	{
		cin >> score[i];
	}

	int MAX = 0;
	for (int i = 1; i <= set; i++)
	{
		if (MAX < score[i])
		{
			MAX = score[i];
		}
	}


	double sum = 0;
	for (int i = 1; i <= set; i++)
	{
		score[i] = (score[i] /MAX) * 100;
		sum += score[i];
	}

	double avrg = 0;
	avrg = sum / set;
	cout << avrg;
}