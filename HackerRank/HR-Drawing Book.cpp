#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int t = (n + 2) / 2;
    int a = ((x + 2) / 2) - 1;
    int b = t - a - 1;
    cout << min(a, b) << endl;
    return 0;
}