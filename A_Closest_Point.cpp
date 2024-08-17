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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n == 1)
        {
            cout << "Yes\n";
        }
        else if (n == 2)
        {
            if (v[0] + 1 != v[1])
            {
                cout << "YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}