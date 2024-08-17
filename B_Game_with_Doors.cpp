#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <cmath>
#include <set>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

const int mod = 1000000007;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        ll open = max(l1, l2);
        ll close = min(r1, r2);
        if (close < open)
        {
            cout << 1 << "\n";
            continue;
        }
        ll ans = close - open + 1;
        if (min(l1, l2) < open)
        {
            ans++;
        }
        if (max(r1, r2) > close)
        {
            ans++;
        }
        cout << ans - 1 << "\n";
    }
    return 0;
}
