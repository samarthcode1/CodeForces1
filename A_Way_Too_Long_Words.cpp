#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int size;
        string f,l;
        cin>>s;
        if(s.size()<=10){
            cout<<s<<"\n";
        }
        else{
            size=s.length();
            f =s[0];
            l =s[size-1];
            cout<<f<<size-2<<l<<"\n";
        }
        
    }
    return 0;
}