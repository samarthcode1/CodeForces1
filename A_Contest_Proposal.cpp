#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

const int mod = 1000000007;
int minNewProblems(int n, vector<int>& a, vector<int>& b) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            a.insert(lower_bound(a.begin(), a.end(), b[i]), b[i]); 
            a.pop_back(); 
            ans++;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        cout << minNewProblems(n, a, b) << endl;
    }
    return 0;
}
