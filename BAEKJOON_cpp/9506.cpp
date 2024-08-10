#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num = 0;
	cin >> num;

	while (num != -1)
	{
		vector<int> v;

		for (int i = 1; i < num + 1; i++)
		{
			if (num % i == 0)
				v.push_back(i);
		}


		int sum = 0;

		for (int i = 0; i < v.size() -1; i++)
		{
			sum += v[i];
		}

		if (num == sum)
		{
			cout << num << " = " << v[0];
			for (int i = 1; i < v.size() - 1; i++)
			{
				cout << " + " << v[i];
			}
			cout << endl;
		}
		else
			cout << num << " is NOT perfect." << endl;

		cin >> num;
	}
}