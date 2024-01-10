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
    vector<int>v(t);
    for(int i=0;i<t;i++)
    {   
        cin>>v[i];
    }
    for(int i=0;i<t;i++){
        if(v[i]<0){
            v[i]=-1*v[i];
        }
    }
    sort(v.begin(), v.end());
    cout<<v[0]<<endl;

    return 0;
}