#include <stdio.h>
int main()
{
    int k, n, i, t, s = 0;
    int car[1000];
    scanf("%d %d", &k, &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &car[i]);
        s += car[i];
        if (s >= k)
        {
            s = s - k;
        }
        else
        {
            t = s % k;
            s = s - t;
        }
    }
    printf("%d\n", s);
    return 0;
}