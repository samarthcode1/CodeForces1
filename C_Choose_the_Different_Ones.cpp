#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
// #include <bits

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

const int mod = 1000000007;
void check()
{
    int n, m, k;
    cin >> n >> m >> k;
    unordered_map<int, int> mp1, mp2;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= k)
        {
            mp1[a[i]]++;
        }
    }
    int amin = *min_element(a.begin(), a.end());
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        if (b[i] <= k)
        {
            mp2[b[i]]++;
        }
    }
    int bmin = *min_element(b.begin(), b.end());
    if (amin > k || bmin > k || n < k / 2 || m < k / 2)
    {
        cout << "No\n";
        return;
    }
    for (int i = 1; i <= k; i++)
    {
        if (mp1.count(i) == 0 && mp2.count(i) == 0)
        {
            cout << "No\n";
            return;
        }
    }
    if (mp1.size() < k / 2 || mp2.size() < k / 2)
    {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        check();
    }
    return 0;
}