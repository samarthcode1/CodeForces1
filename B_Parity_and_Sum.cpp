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

void check()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int countTotal = 0;
    bool check = true;
    ll oddCount = 0; 
    ll evenCount = 0; 
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0 && v[i] > evenCount)
            evenCount = v[i];
        if (v[i] % 2 == 1 && v[i] > oddCount)
            oddCount = v[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i] % 2 != v[0] % 2)
        {
            check = false;
            break;
        }
    }

    if (check)
    {
        cout << 0 <<endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0 && v[i] < oddCount)
        {
            countTotal++;
            v[i] = v[i] + oddCount;
            oddCount = max(oddCount, v[i]);
        }
    }

    check = true;
    for (int i = 1; i < n; i++)
    {
        if (v[i] % 2 != v[0] % 2)
        {
            check = false;
            break;
        }
    }

    if (check)
    {
        cout << countTotal <<endl;
        return;
    }

    ll idx = 0; 
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 1 && v[i] == oddCount)
        {
            idx = i;
            break;
        }
    }

    v[idx] = oddCount + evenCount;
    countTotal++;

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            countTotal++;
        }
    }

    cout << countTotal << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        check();
    }
    return 0;
}