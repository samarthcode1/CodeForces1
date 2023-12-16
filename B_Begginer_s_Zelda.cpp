#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> edg(n - 1, vector<int>(2, -1));
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> edg[i][j];
            }
        }
        vector<vector<int>> ad(n + 1);
        for (int i = 0; i < edg.size(); i++)
        {
            ad[edg[i][0]].push_back(edg[i][1]);
            ad[edg[i][1]].push_back(edg[i][0]);
        }
        int value = 0;
        for (int i = 0; i <= n; i++)
        {
            if (ad[i].size() == 1)
            {
                value++;
            }
        }
        cout << value / 2 + value % 2 << "\n";
    }
    return 0;
}