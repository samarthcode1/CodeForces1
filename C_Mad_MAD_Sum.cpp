#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;


int find(const vector<int> &v) {
    unordered_map<int, int> mp;
    int mad = 0;
    for (int i : v) {
        mp[i]++;
        if (mp[i] >= 2) {
            mad = max(mad, i);
        }
    }
    return mad;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        int sum = 0;
        int check = 0;
        
        while (!check) {
            int pres = 0;
            for (int i = 0; i < n; i++) {
                pres += v[i];
            }
            sum += pres;

            vector<int> b(n);
            for (int i = 0; i < n; i++) {
                b[i] = find(vector<int>(v.begin(), v.begin() + i + 1));
            }
            // for(auto i:b){
            //     cout<<i<<" ";
            // }
            // cout<<endl;
            check = 1;
            for (int i = 0; i < n; i++) {
                v[i] = b[i];
                if (v[i] != 0) {
                    check = 0;
                }
            }
        }

        cout << sum << endl;
    }
    return 0;
}
