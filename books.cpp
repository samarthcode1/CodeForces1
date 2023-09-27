#include <bits/stdc++.h>
using namespace std;

#define mod 1000007

int inversing(int a, int m)
{
    for (int x = 1; x < m; x++)
    {
        if (((a % m) * (x % m)) % m == 1)
        {
            return x;
        }
    }
    return -1;
}

int concep(int arr[], int n)
{
    int *increasing;
    int maxi = 0;
    increasing = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        increasing[i] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && increasing[i] < increasing[j] + 1)
            {
                increasing[i] = increasing[j] + 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (maxi < increasing[i])
        {
            maxi = increasing[i];
        }
    }

    free(increasing);

    return maxi;
}


int main()
{

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = concep(arr, n);

        cout << inversing(ans, mod) << "\n";
    }
    return 0;
}