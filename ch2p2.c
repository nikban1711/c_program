/*If a five-digit number is input through the keyboard, write a 
program to reverse the number.*/
#include <stdio.h>
int main()
{
    int num, number, a, b, c, d, e, reverse;
    printf("enter a 5 digit number\n");
    scanf("%d", &number);

    a = number % 10;
    num = number / 10;

    b = num % 10;
    num = num / 10;

    c = num % 10;
    num = num / 10;

    d = num % 10;
    num = num / 10;

    e = num % 10;

    reverse = (a * 10000) + (b * 1000) + (c * 100) + (d * 10) + e;
    printf("reverse of %d is %d", number, reverse);
    return 0;
}