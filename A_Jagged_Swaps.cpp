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
        if(v[0]==1){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
        // bool check=false;
        // for(int i=1;i<n;i++){
        //     if(v[i]>v[i-1] && v[i]>v[i+1]){
        //         check=true;
        //     }
        // }
        // if(check==true){
        //     cout<<"Yes\n";
        // }
        // else{
        //     cout<<"No\n";
        // }
    }
    return 0;
}