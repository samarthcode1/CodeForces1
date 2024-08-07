#include <bits/stdc++.h>
using namespace std;

string find(int n, const string &s, const string &t, long long &count)
{
    string smallest_path;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '0' && t[i] == '0')
        {
            smallest_path += '0';
            // cout<<smallest_path;
            count+=2;
        }
        else if (s[i] == '1' && t[i] == '1')
        {
            smallest_path += '1';
            // cout<<smallest_path;
            count+=2;
        }
        else if (s[i] == '0' && t[i] == '1')
        {
            smallest_path += '0';
            // cout<<smallest_path;

            count++;
        }
        else if (s[i] == '1' && t[i] == '0')
        {
            smallest_path += '1';
            smallest_path += '0';
            count += 1;
        }
        // cout<<smallest_path<<endl;
    }
    if (s[n - 1] == '0' && t[n - 1] == '0')
    {
        count += 2;
        smallest_path += '0';
        smallest_path += '0';
        // cout<<smallest_path;

    }
    else if (s[n - 1] == '0' && t[n - 1] == '1')
    {
        count += 1;
        smallest_path += '0';
        smallest_path += '1';
        // cout<<smallest_path;

    }
    else if (s[n - 1] == '1' && t[n - 1] == '0')
    {
        count += 1;
        smallest_path += '1';
        smallest_path += '0';
        // cout<<smallest_path;

    }
    else if (s[n - 1] == '1' && t[n - 1] == '1')
    {
        count += 2;
        smallest_path += '1';
        smallest_path += '1';
        // cout<<smallest_path;

    }
    return smallest_path;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        long long count = 1;
        string str = find(n, s, t, count);
        cout << str << endl;
        cout << count << endl;
    }
    return 0;
}
