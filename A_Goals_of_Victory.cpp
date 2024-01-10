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
        vector<int>v(n-1);
        for(int i=0;i<n-1;i++){
            cin>>v[i];
        }
    
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=v[i];
        }
        int final=0-sum;
        cout<<final<<endl;
    }
    return 0;
}