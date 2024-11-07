//2675¹ø
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	int* cycle = new int[num];
	string* sen = new string[num];

	for (int i = 0; i < num; i++)
	{
		cin >> cycle[i] >> sen[i];
	}

	for (int i = 0; i < num; i++)
	{
		for (int x = 0; x < sen[i].length(); x++)
		{
			for (int j = 0; j < cycle[i]; j++)
			{
				cout << sen[i].substr(x, 1);
			}
		}
		cout << endl;
	}
}