#include <bits/stdc++.h>
using namespace std;
vector<int> longestSeq(int n)
{
    vector<int> res;
    int x = n;
    while (x > 0)
    {
        res.push_back(x);
        int y = x;
        while ((y & (y - 1)) == y)
        {
        }
        x = y;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> seq = longestSeq(n);
        cout << seq.size() << "\n";
        for (int x : seq)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
use this logic