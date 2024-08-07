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

int find(int n, int k)
{
    if (n == 1){
        return 0;
    }
    int count = 0;
    while (n > 1)
    {
        count++;
        if (n <= k)
        {
            break;
        }
        n = n - k + 1;
    }
    return count;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<find(n,k)<<endl;
    }
    return 0;
}