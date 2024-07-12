#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	int formation = 0;
	int sum = 0;

	cin >> num >> formation;

	for (int i = 0; i < num.length(); i++)
	{
		if ('0' <= num[i] && num[i] <= '9') 
		{
			sum = sum * formation + (num[i] - '0');
		}
		else if ('A' <= num[i] && num[i] <= 'Z') 
		{
			sum = sum * formation + (num[i] - 'A' + 10);
		}
	}

	cout << sum;

}