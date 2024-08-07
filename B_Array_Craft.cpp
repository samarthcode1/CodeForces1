#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        x--;
        y--;

        vector<int> v(n, 1);
        int shouldToggle = 1;
        for (int i = x + 1; i < n; i++)
        {
            if (shouldToggle)
            {
                v[i] = -1;
            }
            shouldToggle = !shouldToggle;
        }

        shouldToggle = true;

        for (int i = y - 1; i >= 0; i--)
        {
            if (shouldToggle)
            {
                v[i] = -1;
            }
            shouldToggle = !shouldToggle;
        }

        for (const auto &value : v)
        {
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}
