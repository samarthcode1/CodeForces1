#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    while (n--) {
        long long n;
        cin >> n;
        
        vector<long long> heights(n);
        for (long long i = 0; i < n; i++) {
            cin >> heights[i];
        }
        
        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> min_heap;

        long long prev_max = heights[0];
        unordered_map<long long, long long> cost_map;
        
        for (long long i = 1; i < n; i++) {
            long long max_current = max(prev_max, heights[i]);
            prev_max = max(prev_max, heights[i]);
            cost_map[max_current - heights[i]]++;
        }
        
        long long total_ops = 0;
        for (auto cost_pair : cost_map) {
            if (cost_pair.first == 0) {
                continue;
            }
            min_heap.push({cost_pair.first, cost_pair.second});
            total_ops += cost_pair.second;
        }

        long long min_coins = 0;
        long long subtracted_cost = 0;
        
        while (!min_heap.empty()) {
            pair<long long, long long> top_element = min_heap.top();
            min_heap.pop();
            
            if (top_element.first - subtracted_cost <= 0) {
                continue;
            }
            
            min_coins += ((top_element.first - subtracted_cost) * (total_ops + 1));
            total_ops -= top_element.second;
            subtracted_cost += (top_element.first - subtracted_cost);
        }
        
        cout << min_coins << "\n";
    }
    
    return 0;
}
