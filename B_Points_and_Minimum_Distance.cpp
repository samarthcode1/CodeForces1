#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
 int t; cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[200];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+2*n);
    cout<<arr[n-1]-arr[0]+arr[2*n-1]-arr[n]<<endl;
    for(int i = 0, j = n; i < n; i++, j++){
		cout<< arr[i] << " " << arr[j] <<"\n";
	}
  }
    return 0;
}