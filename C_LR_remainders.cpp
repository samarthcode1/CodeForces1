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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        int l = count(s.begin(), s.end(), 'L');
        int r = l;
        vector<int> ans(n);
        int num = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'L')
            {
                num = num * a[--l] % m;
            }
            else
            {
                num = num * a[r++] % m;
            }
            ans[i] = num;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout<<endl;
    //     ll n,m;
    //     cin>>n>>m;
    //     vector<ll>v(n);
    //     for(int i=0;i<n;i++){
    //         cin>>v[i];
    //     }
    //     ll mul=1;
    //     vector<ll>v1(n);
    //     for(int i=0;i<n;i++){
    //         mul*=v[i];
    //     }
    //     // cout<<mul<<" ";
    //     string s;
    //     cin>>s;
    //     int temp=n;
    //     int j=0;
    //     for(int i=0;i<n;i++){
    //         ll rem=mul%m;
    //         // cout<<mul<<" "<<rem<<" ";
    //         // cout<<endl;
    //         if(s[i]=='L'){
    //             mul=mul/v[j];
    //             j++;
    //             // cout<<v[i]<<" ";
    //             // cout<<endl;
    //         }
    //         else if(s[i]=='R'){
    //             mul=mul/v[temp-1];
    //             temp--;
    //         }
    //         v1[i]=rem;
    //     }
    //     for(int i=0;i<v1.size();i++){
    //         cout<<v1[i]<<" ";
    //     }
    //     cout<<endl;
    }
    return 0;
}