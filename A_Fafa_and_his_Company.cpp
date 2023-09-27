#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    if(n==2){
        cout<<1<<"\n";
    }
    else{
        for(int i=2;i<=n;i++)
        {
            if(n%2==0){
                count++;
            }
        }
    }
    cout<<"count\n";
    return 0;
}