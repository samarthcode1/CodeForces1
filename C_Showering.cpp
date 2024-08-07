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
        int n,s,m;
        cin >> n>>s>>m;
        vector<vector<int>>v(n,vector<int>(2,0));
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            v[i][0]=a;
            v[i][1]=b;
        }
        sort(v.begin(),v.end());
        int last=0;
        int time=0;
        for(int i=0;i<n;i++){
            int temp=v[i][0]-last;
            time=max(time,temp);
            last=v[i][1];
        }
        time=max(time,m-last);
        if(time>=s){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
        // for(int i=0;i<n;i++){
        //     cout<<v[i][0]<<" "<<v[i][1]<<endl;
        // }
        // cout<<endl;
    }
    return 0;
}