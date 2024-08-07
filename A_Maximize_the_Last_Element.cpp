#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>

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
        vector<int>v(n);
        int maxi=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i%2==0){
                maxi=max(maxi,v[i]);
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}
