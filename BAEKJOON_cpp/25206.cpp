//25206¹ø
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string info;
	float sum = 0;
	float total = 0;

	for (int i = 0; i < 20; i++)
	{
		getline(cin, info);
		string temp = "";
		float info_Mark;
		string info_score;
		int find = 0;
		find = info.find(" ");
		temp = info.substr(find + 1, 6);
		info_Mark = stoi(info.substr(find + 1, 3));
		total += info_Mark;
		find = temp.find(" ");
		info_score = temp.substr(find + 1, 2);

		if (info_score == "A+")
		{
			sum += info_Mark * 4.5;
		}
		else if (info_score == "A0")
		{
			sum += info_Mark * 4.0;
		}
		else if (info_score == "B+")
		{
			sum += info_Mark * 3.5;
		}
		else if (info_score == "B0")
		{
			sum += info_Mark * 3.0;
		}
		else if (info_score == "C+")
		{
			sum += info_Mark * 2.5;
		}
		else if (info_score == "C0")
		{
			sum += info_Mark * 2.0;
		}
		else if (info_score == "D+")
		{
			sum += info_Mark * 1.5;
		}
		else if (info_score == "D0")
		{
			sum += info_Mark * 1.0;
		}
		else if (info_score == "F")
		{
			sum += 0;
		}
		else
		{
			sum += 0;
			total -= info_Mark;
		}
		
	}

	cout << sum / total;
}