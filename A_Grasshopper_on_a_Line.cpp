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
        int x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<"1\n";
            cout<<x<<endl;
        }
        else{
            cout<<"2\n";
            cout<<"1 "<<x-1<<endl;
        }
    }
    return 0;
}