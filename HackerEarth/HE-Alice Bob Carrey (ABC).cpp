#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long count, sum(0);
    cin >> count;
    long long arr[count], a[count];
    for (size_t i = 0; i < count; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        a[i] = sum;
    }
    long long t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        long long y = a[count - 1] - x;
        long long cnt = (upper_bound(a, a + count, y) - a);
        if (cnt % 2 != 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
    return 0;
}