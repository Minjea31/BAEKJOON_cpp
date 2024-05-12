#include <iostream>
#include <string>
using namespace std;

int main()
{
	int set = 0;
	cin >> set;

	string* voca = new string[set];

	for (int i = 0; i < set; i++)
	{
		cin >> voca[i];
	}

	for (int i = 0; i < set; i++)
	{
		cout << voca[i].at(0) << voca[i].at(voca[i].length() - 1) << endl;
	}
}