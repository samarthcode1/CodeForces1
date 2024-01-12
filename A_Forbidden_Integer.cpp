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
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>v;
        if(x!=1){
            cout<<"Yes\n";
            cout<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<"1"<<" ";
            }
            cout<<"\n";
        }
        else{
            if(k==1 || (k==2 && n%2==1) ){
                cout<<"No\n";
            }
            else{
                cout<<"Yes\n";
                cout<<n%2<<endl     ;

            }
        }
    }
    return 0;
}