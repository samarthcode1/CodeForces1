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
ll solve(map<ll, ll> &mp, ll n, ll money)
{
    ll ans = 0;
    for (auto &i : mp)
    {
        ll p1 = i.first;
        ll q1 = i.second;
        ll count1 = money / p1;
        ll petals = 0;
        ll t1 = min(count1, q1);
        petals += t1 * p1;
        ll remM = money - t1 * p1;
        if (mp.count(p1 + 1))
        {
            ll q2 = mp[p1 + 1];
            ll count2 = remM / (p1 + 1);

            ll t2 = min(count2, q2);

            petals += t2 * (p1 + 1);
            remM -= (t2 * (p1 + 1));
            if (remM > 0)
            {
                if (q2 > t2)
                {
                    ll diff = q2 - t2;
                    ll canTake = min(remM, diff);
                    petals += min(t1, canTake);
                }
            }
        }
        ans = max(ans, petals);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<pair<ll, ll>> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i].first;
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i].second;
        }
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            mp[arr[i].first] = arr[i].second;
        }

        ll ans = solve(mp, n, m);
        cout << ans << "\n";
    }
    return 0;
}
