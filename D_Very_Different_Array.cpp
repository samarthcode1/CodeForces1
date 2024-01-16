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
        int n, m;
        cin >> n >> m;
        vector<int> v1(n);
        vector<int> v2(m);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> v2[i];
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int i = 0, j = m - 1, diff = 0;
        while (i < n)
        {
            if (j >= 0)
            {
                diff += abs(v1[i] - v2[j]);
                j--;
            }
            else
            {
                diff += v1[i];
            }
            i++;
        }
        cout << diff << endl;
    }
    return 0;
}

