// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int f=0;
//         int se=0;
//         int time1=0;
//         int time2=0;
//         int time3=0;
//         while(n--){
//             int m;
//             string s;
//             cin>>m>>s;

//             if(s=="10"){
//                 if(f==0){
//                     time1=time1+m;
//                 }
//                 f=1;
//                 if(m<time1){
//                     time1=m;
//                 }
//             }
//             else if(s=="01"){
//                 if(se==0){
//                     time2=time2+m;
//                 }
//                 se=1;
//                 if(m<time2){
//                     time2=m;
//                 }
//             }
//             else if(s=="11"){
//                 if(se)
//                 if(se==0 && f==0){
//                     time3=time3+m;
//                 }
//                 else if(se==0){
//                     if(time2>m){
//                         time2=m;
//                     }
//                 }
//                 else if(f==0){
//                     if(time1>m){
//                         time1=m;
//                     }
//                 }
//                 se=1;
//                 f=1;
//                 if(m<time3){
//                     time3=m;
//                 }
//             }
//         }
//         if(f==1 && se==1){
//             cout<<time1+time2+time3<<"\n";
//         }
//         else{
//             cout<<-1<<"\n";
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int skill_1 = INT_MAX;
        int skill_2 = INT_MAX;
        int n;
        cin >> n;
        vector<pair<int, string>> a(n);
        int including_two = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            cin >> a[i].second;
            if (a[i].second == "11")
            {
                including_two = min(including_two, a[i].first);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i].second == "01")
            {
                skill_2 = min(skill_2, a[i].first);
            }
            if (a[i].second == "10")
            {
                skill_1 = min(skill_1, a[i].first);
            }
        }

        if (including_two != INT_MAX)
        {
            if (skill_1 == INT_MAX || skill_2 == INT_MAX)
            {
                cout << including_two << "\n";
            }
            else if (skill_1 + skill_2 < including_two)
            {
                cout << skill_1 + skill_2 << "\n";
            }
            else
            {
                cout << including_two << "\n";
            }
        }
        else if (including_two == INT_MAX)
        {
            if (skill_1 == INT_MAX || skill_2 == INT_MAX)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << skill_1 + skill_2 << "\n";
            }
        }
    }
    return 0;
}