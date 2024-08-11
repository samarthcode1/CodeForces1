#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef pair<long long, long long> ii;
typedef vector<ii> vii;
typedef vector<long long> vi;
// #define long long long long
const long long mod = 1000000007;
void check()
{
    long long n, k;
    cin >> n >> k;
    vector<pair<long long, long long>> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i].first;
    }
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i].second;
    }
    sort(a.begin(), a.end());
    long long lo = 0, hi = 2e9, ans = a[n - 1].first;
    while (lo <= hi)
    {
        long long mid = lo + (hi - lo) / 2;
        long long req = (n - 1) / 2 + 2;
        long long rem = k;
        for (long long i = n - 1; i >= 0; i--)
        {
            if (a[i].first >= mid)
                req--;
            else if (a[i].second == 1)
            {
                if (mid - a[i].first <= rem)
                {
                    rem -= mid - a[i].first;
                    req--;
                }
            }
        }
        if (req <= 0)
        {
            ans = max(ans, a[n - 1].first + mid);
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }

    long long j = -1;
    for (long long i = n - 1; i >= 0; i--)
    {
        if (a[i].second == 1)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        cout << ans << '\n';
        return;
    }
    if (j <= n / 2 - 1)
    {
        ans = max(ans, a[n / 2].first + a[j].first + k);
    }
    else
    {
        ans = max(ans, a[n / 2 - 1].first + a[j].first + k);
    }
    cout << ans << '\n';
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        check();
    }
    return 0;
}