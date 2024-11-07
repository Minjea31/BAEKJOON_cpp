//11005¹ø
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num = 0;
    int formation = 0;

    cin >> num >> formation;


    string b_num;
    while (num != 0)
    {
        int tmp = num % formation;
        if (tmp > 9)
        {
            tmp = tmp - 10 + 'A';
            b_num += tmp;
        }
        else
        {
            b_num += ('0' + tmp);
        }
        num /= formation;
    }
    reverse(b_num.begin(), b_num.end());

    cout << b_num << '\n';
}
