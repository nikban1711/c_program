/*If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits.*/
#include <stdio.h>
int main()
{
    int num, sum, a;
    printf("enter a 5 digit number\n");
    scanf("%d", &num);
    sum = 0;
    a = num % 10;
    num = num / 10;
    sum = sum + a;

    a = num % 10;
    num = num / 10;
    sum = sum + a;

    a = num % 10;
    num = num / 10;
    sum = sum + a;

    a = num % 10;
    num = num / 10;
    sum = sum + a;

    a = num % 10;
    num = num / 10;
    sum = sum + a;

    printf("sum of five digits is %d", sum);
    return 0;
}