//2231��
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int result = 0;

    // �ּ� �������� num - 9 * �ڸ���, �ִ�� num
    for (int i = 1; i < num; i++) {
        int sum = i;
        int temp = i;

        // �� �ڸ����� ���� ����
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        // �������� num�� ������ �� ���ڰ� ������
        if (sum == num) {
            result = i;
            break;
        }
    }

    cout << result << endl;
    return 0;
}
