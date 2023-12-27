#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int test;
    cin >> test;
    vector<int> res;
    for (int k = 0; k < test; k++)
    {
        int n, m;
        cin >> n >> m;
        if (n == 1)
        {
            res.push_back(pow(2, m));
        }
        else if (n == 2)
        {
            int sum = 0;
            int flag = -1;
            for (int i = 0; i < test; i++)
            {
                sum += res[i];
                if (sum >= m || res[i] == m)
                {
                    flag = 0;
                }
            }
            if (flag == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}