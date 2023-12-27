
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;  
        cin >> n;
        int k;
        cin >> k;
        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
        for (int i = 0; i < (n - k); i++)
        {
            cout << (n - i) << " ";
        }
        cout<<endl;
    }
    return 0;
}