#include <bits/stdc++.h>
// // #include <iostream>
// // #include <algorithm>
// // #include <set>
// // #include <vector>
// // #include <string>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int length;
//         cin >> length;
//         string s;
//         cin >> s;
//         string s1 = "";
//         for (int i = 0; i < length; i++)
//         {
//             char pat = s[i];
//             int repeating = 1;
//             for (int i = i + 1; i < length; i++)
//             {
//                 char rep = s[i];
//                 if (rep != pat)
//                 {
//                     break;
//                 }
//                 repeating++;
//             }
//             // everse(s.begin(),s.end());
//             // unordered_set<char>s1;
//             // for(int i=0;i<length;i++){
//             //     s1.insert(s[i]);
//             // }
//             // for(auto i=s1.begin();i!=s1.end();i++){
//             //     cout<<*i;
//             // }
//             i += (repeating - 1);
//             if (repeating % 2 == 0)
//             {
//                 s1 += pat;
//                 s1 += pat;
//             }
//             else
//             {
//                 s1 += pat;
//             }
//         }
//         cout << s1 << "\length";
//         // // vector<string>v;
//         // string v="";
//         // for(int i=0; i<length; i++){
//         //     if(s[i]!=s[i+1])
//         //     {
//         //         v.push_back(s[i]);
//         //     }
//         // }
//         // cout<<v<<"\length";

//         // r
//         return 0;
//     }
// }


using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int length;
        string s;
        cin >> length;
        string >> s;
        string s1 = "";
        for (int pointer = 0; pointer < length; pointer++)
        {
            char pat = s[pointer];
            int repeating = 1;
            for (int i = pointer + 1; i < length; i++)
            {
                char c = s[i];
                if (c != pat)
                {
                    break;
                }
                repeating++;
            }

            pointer += (repeating - 1);
            if (repeating % 2 == 0)
            {
                s1 += pat;
                s1 += pat;
            }
            else
            {
                s1 += pat;
            }
        }
        cout << s1 << "\n";
    }
    return 0;
}