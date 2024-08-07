#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

const int mod = 1000000007;

long long find_position_of_1(long long n) {
    long long m = pow(2, floor(log2(n)));
    if (n == m) {
        return n;
    }
    return m;
    // return n - (m + (m /4));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << find_position_of_1(n) << endl;
    }
    return 0;
}
