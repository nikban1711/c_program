#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("%d", sum);

    return 0;
}