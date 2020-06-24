#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum(0);
    cin >> num;
    int arr[num];
    for (size_t i = 0; i < num; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}