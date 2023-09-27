#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main(){
    int t;
	cin>>t;
    while(t--){
        int n;
		int sum=0; 
        cin>>n;
        int a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
            if(a[i]%2==1){
                sum++;
            }
        }
        if(sum%2==0){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}