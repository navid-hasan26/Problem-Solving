#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, m;
    int arr[100001];
    arr[0] = 0;
    arr[1] = 1;
    for (i = 1; i <= 100000 / 2; i++)
    {
        arr[2 * i] = arr[i];
        arr[2 * i + 1] = arr[i] + arr[i + 1];
    }
    while (scanf("%d", &n) == 1)
    {
        if (n == 0)
        {
            break;
        }
        else
        {
            m = 0;
            for (i = 0; i <= n; i++)
            {
                m = max(m, arr[i]);
            }
            cout << m << endl;
        }
    }
    return 0;
}