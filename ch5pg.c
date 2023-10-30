#include <stdio.h>
int main()
{
    int positive = 0, negative = 0, zero = 0, num;
    char choice = 'y';
    while (choice == 'y' || choice == 'Y')
    {
        printf("enter a number : ");
        scanf("%d", &num);
        if (num < 0)
            negative = negative + 1;
        else if (num == 0)
            zero = zero + 1;
        else
            positive = positive + 1;
        printf("do you want to enter another number : ");
        scanf(" %c", &choice);
    }

    printf("number of positive number entered are %d\n", positive);
    printf("number of zero entered are %d\n", zero);
    printf("number of negative number entered are %d\n", negative);
    return 0;
}