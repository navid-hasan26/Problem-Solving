#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int cnt(0);
    for (size_t i = 0; i < n; i++)
    {
        int max = arr[n - 1];
        if (arr[i] == max)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}