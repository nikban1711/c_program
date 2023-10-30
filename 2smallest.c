#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter three numbers\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    (a > b && a < c || a < b && a > c ? printf("%d is second smallest number", a) : (b > c && b < a || b < c && b > a ? printf("%d is second smallest number", b) : printf("%d is second smallest number", c)));
    return 0;
}