#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <cmath>

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
        ll n;
        cin >> n;
        vector<ll> arr(n);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        bool isPossible = true;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] % 2 != arr[0] % 2)
            {
                isPossible = false;
                break;
            }
        }
        if (!isPossible)
        {
            cout << "-1\n";
            continue;
        }

        vector<ll> operations;
        for (ll i = 0; i < 40; i++)
        {
            if (sum == 0)
            {
                break;
            }
            ll mini = LLONG_MAX;
            ll maxi = LLONG_MIN;
            for (auto x : arr)
            {
                mini = min(mini, x);
                maxi = max(maxi, x);
            }
            ll med = (maxi + mini) / 2;
            operations.push_back(med);
            for (auto &x : arr)
            {
                sum -= x;
                x = abs(x - med);
                sum += x;
            }
        }

        if (sum == 0)
        {
            cout << operations.size() << "\n";
            for (auto i : operations)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}
