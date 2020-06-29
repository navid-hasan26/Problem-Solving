#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans;
    char str[1000];
    while (cin >> n >> str)
    {
        ans = 1;
        while (n > 1)
        {
            ans *= n;
            n -= strlen(str);
        }
        cout << ans << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans;
    char str[1000];
    while (cin >> n >> str)
    {
        ans = 1;
        while (n > 1)
        {
            ans *= n;
            n -= strlen(str);
        }
        cout << ans << endl;
    }
    return 0;
}