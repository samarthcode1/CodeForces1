#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char str[21];
        cin>>str;
        cout<<str[n-1]<<"\n";
    }
    return 0;
}