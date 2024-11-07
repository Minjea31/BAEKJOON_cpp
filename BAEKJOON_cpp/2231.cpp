//2231번
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int result = 0;

    // 최소 시작점은 num - 9 * 자리수, 최대는 num
    for (int i = 1; i < num; i++) {
        int sum = i;
        int temp = i;

        // 각 자리수의 합을 구함
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        // 분해합이 num과 같으면 그 숫자가 생성자
        if (sum == num) {
            result = i;
            break;
        }
    }

    cout << result << endl;
    return 0;
}
