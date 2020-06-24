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
    int mini, maxi, x(0), y(0);
    mini = maxi = arr[0];
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            x++;
            maxi = arr[i];
        }
        else if (arr[i] < mini)
        {
            y++;
            mini = arr[i];
        }
    }
    cout << x << " " << y << endl;
    return 0;
}