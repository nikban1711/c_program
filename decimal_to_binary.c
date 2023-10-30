#include <stdio.h>
int main()
{
    int num, binary = 0, bin, i;
    printf(" enter a number : ");
    scanf("%d", &num);
    for (i = 1; num; i *= 10)
    {
        bin = num % 2;
        binary += bin * i;
        num /= 2;
    }
    printf("%d", binary);
    return 0;
}
