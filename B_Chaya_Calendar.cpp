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
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0; i < n; i++)
        {
            cin>>v[i];
        }
        vector<int>v1(n);
        v1[0]=v[0];
        int check=v[0];
        for(int i=1;i<n;i++)
        {
            if(v[i]>check)
            {
                check=v[i];
                v1[i]=check;
                continue;
            }
            else
            {
                int j=2;
                int find=v[i];
                while(check>=v[i])
                {
                    find*=j;
                    if(find>check)
                    {
                        break;
                    }
                    else
                    {
                        find=v[i];
                        j++;
                    }
                }
                check=find;
                v1[i]=check;
            }
        }
        cout<<v1[n-1]<<"\n";

    }
    return 0;
}