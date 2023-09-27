#include<iostream>
using namespace std;
int main(){
     int t;
     cin>>t;
     int count=0;
     while(t--){
        int p,v,t;
        cin>>p>>v>>t;
        if(p==1 && v==1 && t==1){
            count++;
        }
        else if(p==1 && v==1){
            count++;
        }
        else if(v==1 && t==1){
            count++;
        }
        else if(t==1 && p==1){
            count++;
        }
        
     }
     cout<<count<<"\n";
     return 0;
}