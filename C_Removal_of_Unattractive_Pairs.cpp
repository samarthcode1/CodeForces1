#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int main() {
    int t;
    cin >> t;
    // stack<char>s;
    while (t--) {
        int count=0;
        string s;
        cin>>s;    
        int n=s.size();
        for(int i=1;i<n;i++) {
            if(s[i]==s[i-1]){
                continue;
            }
            else{
                count+=2;
            }
        }

    }

    return 0;
}