#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long

void solve(){

    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    sort(vec.begin(),vec.end());
    for(int i = 0; i < n; i++)
    {
        int temp1 = 0;
        int temp2 = 0;
        for(int j = 0; j < n; j++)
        {
            if(vec[i] <= i)
            {
                temp2++;
            }
            else
            {
                temp1++;
            }
        }
    
        if(temp1 == i)
        {
            cout << i << "\n";
            return;
        }
    }


    cout<< -1 << "\n";
    return;

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
