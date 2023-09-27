#include<iostream>

using namespace std;

int main()
{
    int n, k;
    int  arr[50], count = 0;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0 && arr[i] >= arr[k - 1])
            count++;
    }
    cout << count << "\n";
    return 0;
}