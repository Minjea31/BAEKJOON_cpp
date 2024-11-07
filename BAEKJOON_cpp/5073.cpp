//5073¹ø
#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int s[3];
		cin >> s[0] >> s[1] >> s[2];

		if (s[0] == 0 && s[1] == 0 && s[2] == 0)
			break;

		int MAX = s[0];
		int num = 0;
		for (int i = 1; i < 3; i++)
		{
			if (MAX < s[i])
			{
				MAX = s[i];
				
			}
		}
		
		if (MAX >= s[0] + s[1] || MAX >= s[1] + s[2] || MAX >= s[0] + s[2])
		{
			cout << "Invalid" << endl;
		}
		else
		{
			if (s[0] == s[1] && s[1] == s[2])
			{
				cout << "Equilateral" << endl;
			}
			else if (s[0] == s[1] || s[1] == s[2] || s[0] == s[2])
			{
				cout << "Isosceles" << endl;
			}
			else
				cout << "Scalene" << endl;
		}
	}
}