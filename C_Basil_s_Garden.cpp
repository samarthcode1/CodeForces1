#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int caseNum = 0; caseNum < t; ++caseNum) {
        int n;
        cin >> n;

        vector<int> heights(n);
        for (int i = 0; i < n; ++i) {
            cin >> heights[i];
        }

        int time = 0;
        int max_height = 0;
        int i = 0;
        while (i < n) {
            if (heights[i] > max_height) {
                max_height = heights[i];
            }
            heights[i]--;
            time++;
            if (heights[i] == 0) {
                i++;
            }
        }

        cout << time << endl;
    }

    return 0;
}