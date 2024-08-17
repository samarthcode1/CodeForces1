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
        ll L = max(l1, l2);
        ll R = min(r1, r2);
        // cout<<L<<" "<<R<<endl;
        if (R<L)
        {
            cout << 1 << "\n";
            continue;
        }
        ll ans = R - L;
        if (min(l1, l2) < L)
        {
            ans++;
        }
        if (max(r1, r2) > R)
        {
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
