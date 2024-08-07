#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int mod = 1000000007;

int check(int a,int b){
    if(a==b){
        return 0;
    }
    if(a>b){
        return 1;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=0;
        if((check(a,c) + check(b,d))>0){
            count++;
        }
        if((check(a,d)+check(b,c))>0){
            count++;
        }
        if((check(b,c)+check(a,d))>0){
            count++;
        }
        if((check(b,d)+check(a,c))>0){
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}