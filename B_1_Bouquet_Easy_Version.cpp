#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        vector<long long> v(n);
        map<long long, long long> mapped;
        long long present = 0;
        long long left = 0;
        long long count = 0;
        long long countmax = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int i=0;
        while(i<n)
        {
            present += v[i];
            while (left <= i && ((v[i] - v[left]) > 1 || present > m))
            {
                present -= v[left];
                left++;
            }
            if (present <= m)
            {
                countmax = max(countmax, present);
            }
            i++;
        }
        cout << countmax << endl;
    }
    return 0;
}