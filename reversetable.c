#include <stdio.h>
int main()
{
    int a, n;
    
    scanf("%d", &n);
    for (a = 10; a ; a--)
    {
        printf("%d X %d is %d\n", n, a, n * a);
    }

    return 0;
}