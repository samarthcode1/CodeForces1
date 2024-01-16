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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll expected = 0;
        ll curr_charge = 0;
        for (ll i = 0; i < n; i++)
        {
            ll on = (v[i] - curr_charge) * a;
            ll of = b;
            ll increase = min(of, on);
            curr_charge = v[i];
            expected += increase;
        }
        if (expected < f)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}