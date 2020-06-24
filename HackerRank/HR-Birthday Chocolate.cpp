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
    int d, m;
    cin >> d >> m;
    int cnt(0);
    for (size_t i = 0; i < n; i++)
    {
        int sum(0), temp(0);
        for (size_t j = i; j < n; j++)
        {
            if (temp < m)
            {
                sum += arr[j];
                temp++;
            }
        }
        if (sum == d)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}