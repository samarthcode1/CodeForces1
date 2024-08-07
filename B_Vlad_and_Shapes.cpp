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
    for (int l = 0; l < t; l++)
    {
        int n;
        cin >> n;
        vector<int>arr;
        vector<string>str(n);
        for(int l=0; l < n; l++)
        {
            cin>>str[l];
        }
        
        for(int l=0;l<n;l++)
        {
            int count=0;
            for(int k=0; k < str[l].size(); k++)
            {
                if(str[l][k]=='1')
                {
                    count++;
                }
            }
            arr.push_back(count);
        }

        int check=0;
        for(int l=0;l<arr.size()-1;l++)
        {
            if((arr[l]!=0 && arr[l+1]!=0) && arr[l]!=arr[l+1])
            {
                check=-1;
                break;
            }
        }
        if(check!=0)
        {
            cout<<"TRIANGLE\n";
        }
        else
        {
            cout<<"SQUARE\n";
        }
    }
    return 0;
}