#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> Point;
typedef vector<Point> PointList;

int main() {
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        int xc, yc, k;
        cin >> xc >> yc >> k;

        PointList graph;
        int step = 1;

        if (k % 2 == 1) {
            graph.push_back({xc, yc});
            k--;
        }

        while (k > 0) {
            graph.push_back({xc + step, yc + step});
            graph.push_back({xc - step, yc - step});
            step++;
            k -= 2;
        }

        for (const auto &p : graph) {
            cout << p.first << " " << p.second << endl;
        }
    }
    
    return 0;
}
