//2501¹ø
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int num, n;
	cin >> num >> n;

	for (int i = 1; i < num + 1; i++)
	{
		if (num % i == 0)
			v.push_back(i);
	}

	if (n <= v.size())
	{
		cout << v[n-1];
	}
	else
		cout << 0;
}