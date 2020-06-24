#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alice[10], bob[10];
    for (size_t i = 0; i < 3; i++)
    {
        cin >> alice[i];
    }
    for (size_t i = 0; i < 3; i++)
    {
        cin >> bob[i];
    }
    int x(0), y(0);
    for (size_t i = 0; i < 3; i++)
    {
        if (alice[i] > bob[i])
        {
            x++;
        }
        else if (alice[i] < bob[i])
        {
            y++;
        }
    }
    cout << x << " " << y << endl;
    return 0;
}