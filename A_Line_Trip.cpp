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
    long long t;
    cin >> t;
    while (t--)
    {
        long long n,x;
        cin>>n>>x;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long max_diff=v[0]-0;
        for(int i=1;i<n;i++){
            max_diff=max(max_diff,v[i]-v[i-1]);
        }
        max_diff=max(max_diff,2*(x-v[n-1]));
        cout<<max_diff<<endl;
    }
    return 0;
}