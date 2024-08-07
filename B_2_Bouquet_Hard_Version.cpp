#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

// Function to calculate maximum petals that can be bought within the budget
long long maxPetals(int n, long long m, vector<int>& petals, vector<int>& quantities) {
    // Combine petals with quantities and sort by number of petals
    vector<pair<int, long long>> flower_info(n);
    for (int i = 0; i < n; ++i) {
        flower_info[i] = {petals[i], quantities[i]};
    }
    sort(flower_info.begin(), flower_info.end());

    long long max_petals = 0;
    long long total_cost = 0;
    long long total_petals = 0;
    int start = 0;

    // Sliding window technique
    for (int end = 0; end < n; ++end) {
        total_cost += flower_info[end].first * flower_info[end].second;
        total_petals += flower_info[end].second;

        // Ensure the petal difference constraint
        while (flower_info[end].first - flower_info[start].first > 1) {
            total_cost -= flower_info[start].first * flower_info[start].second;
            total_petals -= flower_info[start].second;
            ++start;
        }

        // Check if the total cost is within the budget
        if (total_cost <= m) {
            max_petals = max(max_petals, total_petals);
        } else {
            // Adjust window to fit within the budget
            while (total_cost > m && start <= end) {
                total_cost -= flower_info[start].first * flower_info[start].second;
                total_petals -= flower_info[start].second;
                ++start;
            }
        }
    }

    return max_petals;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long m;
        cin >> n >> m;

        vector<int> petals(n);
        vector<int> quantities(n);

        for (int i = 0; i < n; ++i) {
            cin >> petals[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> quantities[i];
        }

        cout << maxPetals(n, m, petals, quantities) << "\n";
    }

    return 0;
}
