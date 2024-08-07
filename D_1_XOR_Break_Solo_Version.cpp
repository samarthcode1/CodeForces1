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
vector<int>breakOperations(int n,int m){
    vector<int>operations;
    for(int i=0;i<63;i++){
        int y=(1ll<<i){
                
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>operations=breakOperations(n,m);
        if(operations.empty()){
            cout<<"-1\n";
        }
        else{
            cout<<operations.size()<<endl;
            cout<<n<<" ";
            for(int op:operations){
                cout<<op<<" ";
            }
            coiut<<m<<endl;
        }
    }
    return 0;
}