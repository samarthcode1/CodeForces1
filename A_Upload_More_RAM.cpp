#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, j;
        cin >> n >> j;
        long long minSeconds;
        if(n>1){
            minSeconds=(long long )(n-1)*j+1;
        }
        else{
            minSeconds=n;
        }
        cout << minSeconds << endl;
    }

    return 0;
}
