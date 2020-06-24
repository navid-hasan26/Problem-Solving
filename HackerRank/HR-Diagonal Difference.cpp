#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100][100];
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum1(0), sum2(0);
    for (size_t i = 0; i < n; i++)
    {
        sum1 += arr[i][i];
        sum2 += arr[i][n - 1 - i];
    }
    cout << abs(sum1 - sum2) << endl;

    return 0;
}