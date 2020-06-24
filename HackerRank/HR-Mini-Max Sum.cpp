#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long arr[10];
    for (size_t i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 5);
    unsigned long long maxi(0), mini(0);
    for (size_t i = 0; i < 4; i++)
    {
        mini += arr[i];
        maxi += arr[4 - i];
    }
    cout << mini << " " << maxi << endl;
    return 0;
}