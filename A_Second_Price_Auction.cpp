#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max_index=max_element(a.begin(),a.end())-a.begin();
    sort(a.begin(),a.end());
    int max_value=a[n-2];
    cout<<max_index+1<<" "<<max_value<<"\n";
    return 0;
}

