#include <stdio.h>
int main()
{
    int a;

    printf("enter number\n");
    scanf("%d", &a);
    if (a >= 0)
    {
        printf("%d", a);
    }
    if (a < 0)
    {
        a = -a;
        printf("%d", a);
    }
}