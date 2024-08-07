#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the minimum number of operations to increase the median
long long min_operations_to_increase_median(int n, vector<int>& a) {
    // Sort the array
    sort(a.begin(), a.end());

    // Calculate the median index and value
    int median_index = (n + 1) / 2;
    int median_value = a[median_index - 1];

    // Initialize total operations needed
    long long operations = 0;

    // Iterate through each element and compute operations needed to increase the median
    for (int num : a) {
        operations += max(0, median_value - num);
    }

    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << min_operations_to_increase_median(n, a) << endl;
    }

    return 0;
}
