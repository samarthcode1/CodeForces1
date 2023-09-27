#include<iostream>
#include<vector>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n,t;
        cin>>n>>t;
        vector<int>a(n),b(n); 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int total=0,i=0,idx=-1;
        while(t && i<n){
            if(a[i]<=t){
                if(b[i]>total){
                    total=b[i];
                    idx=i+1;
                }
            }
            i++;
            t--;
        }
        cout<<idx<<"\n";
    }
    return 0;
}