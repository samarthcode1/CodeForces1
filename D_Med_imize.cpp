#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(int n, int k, vector<int>& a) {
    int remaining = n % k;
    if (remaining == 0) remaining = k;
    
    // Sort the array in descending order
    sort(a.begin(), a.end(), greater<int>());
    
    // Return the median of the remaining largest elements
    return a[(remaining - 1) / 2];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        cout << solve(n, k, a) << '\n';
    }
    
    return 0;
}