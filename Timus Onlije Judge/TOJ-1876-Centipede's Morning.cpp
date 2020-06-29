#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, l;
    cin >> r >> l;
    r = r * 2 + 39;
    l = l * 2 + 40;
    if (r > l)
    {
        cout << r << endl;
    }
    else
    {
        cout << l << endl;
    }
    return 0;
}