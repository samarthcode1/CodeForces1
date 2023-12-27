#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int o = 0;
        int z = 0;
        for (int index = 0; index < s.size(); index++)
        {
            if (s[index] == '0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        int index = 0;
        for (index = 0; index < s.size(); index++)
        {
            if (s[index] == '0')
            {
                o--;
            }
            if (s[index] == '1')
            {
                z--;
            }
            if (z < 0 || o < 0)
            {
                break;
            }
        }
        cout << (s.size() - index) << endl;
    }
    return 0;
}