#include <iostream>
using namespace std;

int maxConsecutiveOnes(int n) {
    int maxCount = 0;
    int count = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0; // Reset count when encountering 0
        }
        n = n / 2;
    }

    return maxCount;
}

int main() {
    int decimalNumber;
    cin >> decimalNumber;

    int maxConsecutive = maxConsecutiveOnes(decimalNumber);

    cout << maxConsecutive << endl;

    return 0;
}
