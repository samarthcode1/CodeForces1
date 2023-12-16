#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string position;
        cin >> position;

        char c = position[0];
        char r = position[1];

        for (char i = 'a'; i <= 'h'; i++) {
            if (i != c) {
                cout << i << r << endl;
            }
        }

        for (char i = '1'; i <= '8'; i++) {
            if (i != r) {
                cout << c << i << endl;
            }
        }
    }

    return 0;
}