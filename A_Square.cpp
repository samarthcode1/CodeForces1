#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
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
    vector<int> x(4), y(4);
    while (t--)
    {
        int ind = 0;
        int val = 4;
        while (val--)
        {
            cin >> x[ind] >> y[ind];
            ind++;
        }

        int xmaxi = 1;
        int ymaxi = 1;
        for (int i = 1; i < 4; i++)
        {
            xmaxi = max(xmaxi, abs(x[i] - x[i - 1]));
            ymaxi = max(ymaxi, abs(y[i] - y[i - 1]));
        }
        cout << xmaxi * ymaxi << endl;
    }

    return 0;
}