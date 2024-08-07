#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int calculateTypingTime(const string &s) {
    int time = 2; 
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            time += 1; 
        } else {
            time += 2; 
        }
    }
    return time;
}

int main() {
    int t;
    cin >> t;
    vector<string> results(t);
    
    while (t--) {
        string s;
        cin >> s;
        int maxTime = -1;
        string bestString;
        
        for (char ch = 'a'; ch <= 'z'; ++ch) {
            for (int i = 0; i <= s.length(); ++i) {
                string newString = s.substr(0, i) + ch + s.substr(i);
                int newTime = calculateTypingTime(newString);
                if (newTime > maxTime) {
                    maxTime = newTime;
                    bestString = newString;
                }
            }
        }
        
        cout << bestString << endl;
    }
    
    return 0;
}
