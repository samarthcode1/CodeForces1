#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s1="codeforces";
        int flag=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=s1[i]){
                flag++;
            }
        }
        cout<<flag<<"\n";
    }
    return 0;

}