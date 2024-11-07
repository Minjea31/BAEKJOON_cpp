//1085¹ø
#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int Min = x;
	if (Min > y)
		Min = y;
	if (Min > w - x)
	{
		Min = w - x;
	}
	if (Min > h - y)
	{
		Min = h- y;
	}

	cout << Min;
}