#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

const int mod = 1000000007;
vector<int> find(vector<int> &towerHeights)
{
    int n = towerHeights.size();
    stack<int> leftStack;
    stack<int> rightStack;
    vector<int> result(n, -1);

    for (int i = 0; i < n; i++)
    {
        while (!leftStack.empty() && towerHeights[leftStack.top()] >= towerHeights[i])
        {
            leftStack.pop();
        }

        if (!leftStack.empty())
        {
            result[i] = leftStack.top();
        }
        leftStack.push(i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        while (!rightStack.empty() && towerHeights[rightStack.top()] >= towerHeights[i])
        {
            rightStack.pop();
        }

        if (!rightStack.empty())
        {
            if (result[i] != -1)
            {
                if (abs(result[i] - i) == abs(rightStack.top() - i))
                {
                    if (towerHeights[result[i]] > towerHeights[rightStack.top()])
                        result[i] = rightStack.top();
                }
                else if (abs(result[i] - i) > abs(rightStack.top() - i))
                    result[i] = rightStack.top();
            }
            else
                result[i] = rightStack.top();
        }

        rightStack.push(i);
    }

    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << find(v);
    return 0;
}