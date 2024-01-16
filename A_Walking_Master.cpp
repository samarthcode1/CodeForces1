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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {   
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b<=d && c<=a+d-b){
            cout<<(d-b+(a+d-b-c))<<"\n";
        }
        else{
            cout<<-1<<endl;
        }

    }
    return 0;
}
