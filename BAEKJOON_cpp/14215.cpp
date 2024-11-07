//14215¹ø
#include <iostream>
using namespace std;

int main()
{
	int s[3];
	cin >> s[0] >> s[1] >> s[2];

	int MAX = s[0];
	for (int i = 1; i < 3; i++)
	{
		if (MAX < s[i])
		{
			MAX = s[i];
		}
	}

	if (s[0] + s[1] + s[2] - MAX > MAX)
	{
		cout << s[0] + s[1] + s[2];
	}
	else if (s[0] + s[1] + s[2] - MAX <= MAX)
	{
		cout << (s[0] + s[1] + s[2] -MAX) * 2 -1;
	}
}