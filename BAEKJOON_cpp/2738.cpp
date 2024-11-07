//2738¹ø
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector < vector <int> > A;
	vector < vector <int> > B;

	int row = 0, column = 0;

	cin >> row >> column;

	for (int i = 0; i < row; i++)
	{
		vector <int> A2;
		for (int j = 0; j < column; j++)
		{
			int a = 0;
			cin >> a;
			A2.push_back(a);
		}
		A.push_back(A2);
	}
	for (int i = 0; i < row; i++)
	{
		vector <int> B2;
		for (int j = 0; j < column; j++)
		{
			int b = 0;
			cin >> b;
			B2.push_back(b);
		}
		B.push_back(B2);
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			int C = A[i][j] + B[i][j];
			cout << C << " ";
		}
		cout << endl;
	}

}