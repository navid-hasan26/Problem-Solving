#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    for (size_t i = 0; i < 100000; i++)
    {
        x1 += v1;
        x2 += v2;
        if (x1 == x2)
            break;
    }
    if (x1 != x2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}