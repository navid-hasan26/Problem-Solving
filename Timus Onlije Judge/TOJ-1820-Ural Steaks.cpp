#include <stdio.h>
int main()
{
    int n, k, ans;
    scanf("%d %d", &n, &k);
    if (n <= k || n == 1)
    {
        printf("2\n");
    }
    else
    {
        ans = n * 2 / k;
        if (n * 2 % k != 0)
        {
            ans += 1;
        }
        printf("%d\n", ans);
    }
    return 0;
}