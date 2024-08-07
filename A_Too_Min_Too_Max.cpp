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
        sort(v.begin(), v.end());
        int f1,f2,l1,l2;
        f1=v[0];
        f2=v[1];
        l1=v[n-2];
        l2=v[n-1];
        // int max_val = 0;
        int max_val = abs(f1-l2)+abs(l2-f1)+abs(f2-l1)+abs(l1-f2);
        cout << max_val << endl;
    }
    return 0;
}