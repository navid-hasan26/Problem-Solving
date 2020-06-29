#include <stdio.h>
int main()
{
    int i, x = 1, temp, n, sum = 0;
    scanf("%d", &n);
    if (n < 1)
    {
        temp = x;
        x = n;
        n = temp;
    }
    for (i = x; i <= n; i++)
    {
        sum += x++;
    }
    printf("%d\n", sum);
    return 0;
}