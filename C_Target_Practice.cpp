#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

const int mod = 1000000007;

int main()  
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<char>> mat(10, vector<char>(10));
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> mat[i][j];
            }
        }
        int points = 0;
        for (int i = 0; i < 5; i++)
        {
            for (int x = i + 1; x < 10 - i - 1; x++)
            {

                if (mat[x][9 - i] == 'X')
                {
                    points += (i + 1);
                }

                if (mat[x][i] == 'X')
                {
                    points += (i + 1);
                }
            }

            for (int j = i; j < 10 - i; j++)
            {
                if (mat[9 - i][j] == 'X')
                {
                    points += (i + 1);
                }
                if (mat[i][j] == 'X')
                {
                    points += (i + 1);
                }
            }
        }
        cout << points << "\n";
    }
    return 0;
}