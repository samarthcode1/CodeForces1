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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool sorted = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] > v[i])
                sorted = false;
        }
        if (k == 1)
        {
            if (sorted)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
    return 0;
}
