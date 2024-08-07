#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;
typedef vector<int> vi;

ll earliestTimeAllLightsOn(int rooms, int period, const vi& arr) {
    vi sortedTimes = arr; 
    sort(sortedTimes.begin(), sortedTimes.end());
    ll upperBound = sortedTimes.back() + period;
    
    for (ll checkTime = sortedTimes.back(); checkTime <= upperBound; ++checkTime) {
        bool allOn = true;
        for (int time : sortedTimes) {
            ll elapsed = checkTime - time;
            if (elapsed < 0 || elapsed % (2 * period) >= period) {
                allOn = false;
                break;
            }
        }
        if (allOn) {
            return checkTime;
        }
    }
    
    return -1;
}

int main() {
  
    int t;
    cin >> t;
    
    while (t--) {
        int rooms, period;
        cin >> rooms >> period;
        
        vi arr(rooms);
        for (int i = 0; i < rooms; ++i) {
            cin >> arr[i];
        }
        
        cout << earliestTimeAllLightsOn(rooms, period, arr) <<endl;
    }
    
    return 0;
}
