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
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> v1;
        v1.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] <= v[i])
            {
                v1.push_back(v[i]);
            }
            else
            {
                v1.push_back(min(v[i - 1], v[i]));
                v1.push_back(v[i]);
            }
        }
        cout << v1.size() << "\n";
        for (auto i : v1)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}