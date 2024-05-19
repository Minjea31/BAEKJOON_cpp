#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num1;
	string num2;
	string num1_real;
	string num2_real;
	cin >> num1 >> num2;

	num1_real = num1.substr(num1.length() - 1, 1) +
		num1.substr(num1.length() - 2, 1) +
		num1.substr(num1.length() - 3, 1);

	num2_real = num2.substr(num2.length() - 1, 1) +
		num2.substr(num2.length() - 2, 1) +
		num2.substr(num2.length() - 3, 1);

	if (stoi(num1_real) >= stoi(num2_real))
		cout << num1_real;
	else
		cout << num2_real;
}