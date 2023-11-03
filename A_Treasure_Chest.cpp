#include <iostream>
using namespace std;
 
int main() {
 int t; cin>>t;
  while(t--){
      
      int x,y,k;
      cin>>x>>y>>k;
      int t=x;
      if(y<=x)
        cout<<t<<"\n";
      else{
         if(y-x<k){
            cout<<y<<"\n";
         }else{
          t+=k;
          t+=2*(y-t);
          cout<<t<<"\n";
          }
      }
        
  }
    return 0;
}