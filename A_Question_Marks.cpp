#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int find(int n, const string& temp) {
    int freq[5] = {0};
    for (char c : temp) {
        if (c == '?') freq[4]++;
        else freq[c - 'A']++;
    }
    
    int r = 0;
    int s = 0;
    
    for (int i = 0; i < 4; i++) {
        r += min(freq[i], n);
        s += max(0, n - freq[i]);
    }
    
    r += min(freq[4], s);
    
    return r-freq[4];
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string temp;
        cin >> n >> temp;
        cout << find(n, temp) << endl;
    }
    
    return 0;
}

cp