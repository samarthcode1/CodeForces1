#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int mod = 1000000007;

int findGCD(ll a, ll b) {
    return b == 0 ? a : findGCD(b, a % b);
}

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        ll n, m;
        cin >> n >> m;
        ll count = 0;
        vector<bool> divisible(m + 1, false);
        for (ll b = 1; b <= m; b++) {
            int gcd_b = findGCD(b, m);
            if (!divisible[gcd_b]) {
                ll a = gcd_b;
                while (a <= m) {
                    if ((a + b) % (gcd_b * b) == 0) {
                        for (ll mult = a; mult <= m; mult += a) {
                            divisible[mult] = true;
                        }
                        break;
                    }
                    a += gcd_b;
                }
            }
        }
        for (ll a = 1; a <= n; a++) {
            int gcd_a = findGCD(a, m);
            if (divisible[gcd_a]) {
                count += m / gcd_a;
            }
        }
        cout << count << "\n";
    }
    return 0;
}