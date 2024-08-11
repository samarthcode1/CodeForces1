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
        int number;
        cin >> number;
        vector<int> v(number);
        for (int i = 0; i < number; i++)
        {
            cin >> v[i];
        }
        vector<int>permu(number);
        for(int i=0;i<number;i++){
            permu[i]=v[(i+1)%number];
        }
        for(auto i:permu){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}