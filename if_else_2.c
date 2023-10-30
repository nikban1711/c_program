// number is multiple of and remainder
#include <stdio.h>
int main()
{

    int a;
    printf("enter the number\n");
    scanf("%d", &a);
    if (a % 35 == 0)
    {
        printf("number is multipleof 35 ", a);
    }
    else
    {
        printf("number is not multiple of 35 and remainder is %d", a % 35);
        return 0;
    }
}