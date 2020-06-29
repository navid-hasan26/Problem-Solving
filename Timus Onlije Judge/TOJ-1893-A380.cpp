#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    char c;
    string seat;
    cin >> r;
    cin >> c;
    if (r <= 2)
    {
        if (c == 'A' || c == 'D')
            seat = "window";
        else
            seat = "aisle";
        cout << seat << endl;
    }
    else if (r <= 20)
    {
        if (c == 'A' || c == 'F')
            seat = "window";
        else
            seat = "aisle";
        cout << seat << endl;
    }
    else
    {
        if (c == 'A' || c == 'K')
            seat = "window";
        else if (c == 'C' || c == 'D' || c == 'G' || c == 'H')
            seat = "aisle";
        else
            seat = "neither";
        cout << seat << endl;
    }
    return 0;
}