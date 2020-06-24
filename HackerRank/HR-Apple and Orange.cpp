#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    int temp, app(0), org(0);
    for (size_t i = 0; i < m; i++)
    {
        cin >> temp;
        if (temp + a >= s && temp + a <= t)
        {
            app++;
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp + b >= s && temp + b <= t)
        {
            org++;
        }
    }
    cout << app << endl;
    cout << org << endl;
    return 0;
}