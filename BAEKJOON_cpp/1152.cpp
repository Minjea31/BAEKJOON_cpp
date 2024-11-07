//1152¹ø
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sen;
	getline(cin, sen);

	int count = 1;

	if (sen.length() == 1 && sen[0] == ' ') {
		cout << 0;
		return 0;
	}

	for (int i = 1; i < sen.length() - 1; i++) {
		if (sen[i] == ' ')
			count++;
	}

	cout << count;
}