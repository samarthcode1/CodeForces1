#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        int increments = 5;
        for (int i = 0; i < increments; ++i) {
            arr[0]++;
            sort(arr, arr + 3);
        }
        int max_bananas = arr[0] * arr[1] * arr[2];
        cout << max_bananas << endl;
    }
    return 0;
}
