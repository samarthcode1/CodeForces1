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

bool check(string &s, int n)
{
    int u = 0, d = 0;
    for (char c : s)
    {
        if (c == 'U')
            u++;
        else
            d++;
    }
    return (u % 2 != 0);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (check(s, n))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
