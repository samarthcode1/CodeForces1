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
        vector<int> charac(26, 0);
        string s;
        cin >> s;
        int freq = 0;
        for (int i = 0; i < n; i++)
        {
            charac[s[i] - 'A']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (charac[i] >= i + 1)
            {
                freq++;
            }
        }
        cout << freq << endl;
    }
    return 0;
}