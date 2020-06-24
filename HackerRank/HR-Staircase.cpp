#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (size_t j = 1; j <= i; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}