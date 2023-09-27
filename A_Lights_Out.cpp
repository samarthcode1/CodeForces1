#include <iostream>
#include <vector>
#define toggle(x) (x = !x)
using namespace std;
int main()
{
    typedef vector<int> v;
    vector<v> arr(3 + 2, v(3 + 2, true));

    for (int r = 1; r <= 3; r++)
    {
        for (int c = 1; c <= 3; c++)
        {
            int change;
            cin >> change;
            if (change % 2 == 1)
            {
                toggle(arr[r][c]);
                toggle(arr[r][c - 1]);
                toggle(arr[r][c + 1]);
                toggle(arr[r + 1][c]);
                toggle(arr[r - 1][c]);
            }
        }
    }
    for (int r = 1; r <= 3; r++)
    {
        for (int c = 1; c <= 3; c++)
        {
            if (arr[r][c])
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
            
        }
        cout<<endl;
    }
    return 0;
}