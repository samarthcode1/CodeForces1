#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;  
        cin>>n;
        int a[100];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int zero=0;
        int maxlength=0;
        for(int i=0; i<n; i++){
            if(a[i]==0){
                zero++;
            }
            else{
                zero=0;
            }
            if(maxlength<zero){
                maxlength=zero;
            }
        }
        cout<<maxlength<<"\n";
    }
    return 0;

}