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
        int maximum_quests;
        cin >> maximum_quests;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int a1;
            cin >> a1;
            a.push_back(a1);
        }
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int b1;
            cin >> b1;
            b.push_back(b1);
        }
        int bmaximum = 0;
        int maximum = 0;
        int amaximum = 0;
        for (int i = 0; i < n; i++)
        {
            if (maximum_quests == i)
            {
                break;
            }
            amaximum += a[i];   
            bmaximum = max(bmaximum, b[i]);
            maximum = max(amaximum + (maximum_quests - i - 1) * bmaximum, maximum);
        }
        cout << maximum << "\n";
    }
    return 0;
}