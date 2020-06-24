#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n, sum(0);
    cin >> n;
    unsigned long long arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}