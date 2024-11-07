//2566¹ø
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector < vector <int> > A;

	for (int i = 0; i < 9; i++)
	{
		vector <int> A2;
		for (int j = 0; j < 9; j++)
		{
			int a = 0;
			cin >> a;
			A2.push_back(a);
		}
		A.push_back(A2);
	}

	int row_MAX = 0, column_MAX = 0;
	int value_MAX = 0;

	for (int i = 0; i < 9; i++)
	{
		vector <int> A2;
		for (int j = 0; j < 9; j++)
		{
			if (value_MAX < A[i][j])
			{
				value_MAX = A[i][j];
				row_MAX = i;
				column_MAX = j;
			}
		}
	}

	cout << value_MAX << endl << row_MAX + 1 << " " << column_MAX + 1;
}