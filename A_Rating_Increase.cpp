#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ab;
        cin >> ab;
        int n=ab.size();
        bool isplit = false;
        for (int i = 1; i < n; i++)
        {
            if (ab[i] == '0')
            {
                continue;
            }
            int a = stoi(ab.substr(0, i));
            int b = stoi(ab.substr(i));
            if (a < b)
            {
                cout << a << " " << b << endl;
                isplit = true;
                break;
            }
        }
        if (!isplit)
        {
            cout << -1 <<endl;
        }
    }
    return 0;
}