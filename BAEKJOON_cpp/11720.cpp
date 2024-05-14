#include <iostream>
#include <string>
using namespace std;

int main()
{

	string int_s = { 0 };
	cin >> int_s;

	int sum = 0;

	for (int i = 0; i < int_s.length(); i++)
	{
		sum += (int)int_s.at(i) - 48;
	}
	cout << sum;
}