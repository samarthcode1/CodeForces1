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
        string b,f;
        cin>>b>>f;
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(b[i]=='1'){
                count1++;
            }
            if(f[i]=='1'){
                count2++;
            }
            if(b[i]=='1' && f[i]=='1'){
                count2--;
                count1--;
            }
        }
        if(count1==count2){
            cout<<count1<<"\n";
        }
        else{
            cout<<max(count1,count2)<<"\n";
        }


    }
    return 0;
}
