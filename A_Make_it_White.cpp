#include<iostream>
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
        string s;
        cin>>s;
        int count;
        int f,e;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                f=i+1;
                break;
            }
        }
        for(int j=n-1;j>=0;j--){
            if(s[j]=='B'){
                e=j+1;
                break;
            }
        }
        count=e-f+1;
        cout<<count<<"\n";
    }
    return 0;
}