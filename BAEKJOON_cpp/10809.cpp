//10809¹ø
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sen;
	cin >> sen;

	for (int i = 97; i < 123; i++)
	{
		char voca;
		voca = i;
		if (sen.find(voca, 0) <= (sen.length() - 1))
		{
			cout << sen.find(voca, 0) << " ";
		}
		else
			cout << "-1" << " ";
	}
}