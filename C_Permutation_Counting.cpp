#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

ll maxScore(int n, ll k, vector<ll>& cards) {
    ll total_cards = 0;
    for (int i = 1; i <= n; ++i) {
        total_cards += cards[i - 1];
        ll cards_needed = min(total_cards, k);
        k -= cards_needed;
        total_cards -= cards_needed;
        if (total_cards == 0) break;  // No more cards left to distribute
    }
    return n * (n + 1) / 2 - total_cards;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> cards(n);
        for (int i = 0; i < n; ++i) {
            cin >> cards[i];
        }
        cout << maxScore(n, k, cards) << endl;
    }
    return 0;
}
