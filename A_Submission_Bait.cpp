#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

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
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for(auto i:v){
            mp[i]++;
        }
        bool check = false;
        for (auto i : mp)
        {
            if (i.second % 2 != 0)
            {
                check = true;
                break;
            }
        }
        if (check==true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}