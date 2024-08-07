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
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d=n-1;
        int val=1;
        int maxi=0;
        while(d>=0){
            if(__gcd(n,d)+d>maxi){
                maxi=__gcd(n,d)+d;
                val=d;
            }
            d--;
        }
        cout<<val<<endl;

    }
    return 0;
}