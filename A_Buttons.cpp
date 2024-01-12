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
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0){
            if(a>b){
                cout<<"First\n";
            }
            else{
                cout<<"Second\n";
            }
        }
        else{
            if(b>a){
                cout<<"Second\n";
            }
            else{
                cout<<"First\n";
            }
        }
    }
    return 0;
}