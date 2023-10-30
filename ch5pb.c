#include <stdio.h>

int main()
{
    int i = 0, n, factorial = 1;
    printf("enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("factorial of %d is %d", n, factorial);
    return 0;
}