#include <iostream>

using namespace std;

int modular_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum = (sum + n % 10) % 10; // Efficient modular digit summation
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    for (int _ = 0; _ < t; _++) {
        int n;
        cin >> n;

        int cum_sum = 0;

        for (int i = 1; i <= n; i++) {
            cum_sum += modular_sum(i); // Use modular_sum for all numbers
        }

        cout << cum_sum << endl;
    }

    return 0;
}
