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
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                count++;
            }
        }
        if(count==0){
            cout<<"0"<<endl;
            continue;
        }
        bool check=false;
        for(int i=0;i<n-2;i++){
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                check=true;
                break;
            }
        }
        if(check==true){
            cout<<"2"<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
    return 0;
}

