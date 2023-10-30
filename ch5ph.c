#include <stdio.h>
int main()
{
    int num, result = 0, oct, i;
    printf(" enter a number : ");
    scanf("%d", &num);
    for (i = 1; num; i *= 10)
    {
        oct = num % 8;
        result += oct * i;
        num /= 8;
    }
    printf("%d", result);
    return 0;
}