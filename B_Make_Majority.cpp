#include <iostream>
#include <string>
using namespace std;

bool check(int n, const string &s)
{
    if (n == 1)
    {
        return s == "1";
    }

    int c1 = 0;
    int c2 = 0;

    if (s[0] == '1')
    {
        c1++;
    }
    else
    {
        c2++;
    }

    for (int i = 1; i < n; ++i)
    {
        if (s[i] == '1')
        {
            c1++;
        }
        else
        {
            if (s[i - 1] == '1')
            {
                c2++;
            }
        }
    }

    return c1 > c2;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (check(n, s))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
