#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, x;
        cin >> num;
        x = num / 5 + 1;
        if (num < 38)
        {
            cout << num << endl;
        }
        else
        {
            if ((x * 5) - num <= 2)
            {
                cout << x * 5 << endl;
            }
            else
            {
                cout << num << endl;
            }
        }
    }
    return 0;
}