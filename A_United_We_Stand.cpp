#include <iostream>
#include <vector>
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<int> b,c;
        int i = 0;
        while (v[i] == v[0])
        {
            b.push_back(v[i]);
            i++;
        }
        while (i < n)
        {
            c.push_back(v[i]);
            i++;
        }
        if (c.size() == 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << b.size() << " " << c.size() << "\n";
            for (auto i : b)
            {
                cout << i << " ";
            }
            cout << "\n";
            for (auto i : c)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}