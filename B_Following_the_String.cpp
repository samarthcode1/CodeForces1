#include <iostream>
#include <vector>
#include <unordered_map>
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
    unordered_map<int, vector<char>> mp;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string s = "";
        int ind=0;
        for (auto i : v)
        {
            if (i == 0)
            {
                mp[0].push_back(char('a'+ind));
                s+=(char)('a'+ind);
                ind++;
            }
            else{
                s+=mp[i-1].back();
                char ch=mp[i-1].back();
                mp[i-1].pop_back();
                mp[i].push_back(ch);
            }
            
        }
        cout<<s<<endl;
    }
    return 0;
}