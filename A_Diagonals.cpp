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
        int n,k;
        cin>>n>>k;
        vector<int>v;
        for(int i=1;i<n;i++){
            v.push_back(i);
            v.push_back(i);
        }
        v.push_back(n);
        sort(v.rbegin(),v.rend());
        int count=0;
        for(auto &i:v){
            if(k==0){
                break;
            }
            int mini=min(i,k);
            k-=mini;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}