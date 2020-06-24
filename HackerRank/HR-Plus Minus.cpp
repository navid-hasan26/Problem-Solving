#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, p(0), z(0), n(0);
    cin >> t;
    double arr[t];
    for (size_t i = 0; i < t; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            n++;
        }
        else if (arr[i] == 0)
        {
            z++;
        }
        else
        {
            p++;
        }
    }
    cout << fixed << setprecision(6) << p / (double)t << endl;
    cout << fixed << setprecision(6) << n / (double)t << endl;
    cout << fixed << setprecision(6) << z / (double)t << endl;
    return 0;
}