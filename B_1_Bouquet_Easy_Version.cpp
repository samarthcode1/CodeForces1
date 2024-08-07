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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll ans=0,sum=0;
        for(ll l=0,r=0;l<n;){
            while(r<n && v[r]-v[l]<=1 && sum+v[r]<=k){
                sum+=v[r];
                r++;
            }
            ans=max(ans,sum);
            sum-=v[l];
            l++;
        }
        cout<<ans<<endl;
    }
    return 0;
}