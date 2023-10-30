#include <stdio.h>
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d", &a);
    if (a > 0)
        printf("%d is positive", a);
    if (a == 0)
        printf("a is zero");
    if (a < 0)
        printf("%d is negative", a);
    return 0;
}