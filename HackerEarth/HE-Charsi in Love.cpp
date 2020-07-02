#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i * (i + 1) < n * 2; i++)
    {
        int t = n * 2 - i * (i + 1);
        int k = (int)sqrt(t);
        if (k * (k + 1) == t)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}