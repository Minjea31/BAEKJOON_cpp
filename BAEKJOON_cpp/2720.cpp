#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int count;
	cin >> count;
	vector<int> total;

	for (int i = 0; i < count; i++)
	{
		int sum;
		int Q = 0, D = 0, N = 0, P = 0;
		cin >> sum;

		while (sum)
		{
			if (sum >= 25)
			{
				Q++;
				sum -= 25;
			}
			else if (sum >= 10)
			{
				D++;
				sum -= 10;
			}
			else if (sum >= 5)
			{
				N++;
				sum -= 5;
			}
			else
			{
				P++;
				sum -= 1;
			}
		}
		cout << Q << " " << D << " " << N << " " << P << "\n";
	}
}