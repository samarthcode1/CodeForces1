#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
// #include <bits/stdc++.h>

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
        int v[n][2];
        for(int i=0;i<n;i++){
            cin>>v[i][0]>>v[i][1];
        }
        int min_val=0;
        int max_val=INT_MAX;
        for(int i=0;i<n;i++){
            int a1=v[i][0];
            int x1=v[i][1];
            if(a1==1){
                min_val=max(min_val,x1);
            }
            else if(a1==2){
                max_val=min(max_val,x1);
            }
            else if(a1==3){
                if(min_val<=x1 && x1<=max_val){
                    if(x1==min_val){
                        min_val++;
                    }
                    else if(x1==max_val){
                        max_val--;
                    }
                    else{
                        max_val=x1-1;
                    }
                }
            }
        }
        int num=0;
        if(max_val>=min_val){
            num=max_val;
        }
        cout<<num<<endl;
    }
    return 0;
}


