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
        string s;
        cin>>s;
        int a=0;
        int b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                a++;
            }
            else if(s[i]=='B'){
                b++;
            }
        }
        // cout<<a<<" "<<b<<endl;
        int maxi=max(a,b);
        if(maxi==a){
            cout<<"A\n";
        }
        else{
            cout<<"B\n";
        }
    }
    return 0;
}