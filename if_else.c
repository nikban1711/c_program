#include <stdio.h>

int main()
{
    int age, b;
    printf("enter your age\n");
    scanf("%d", &age);

    if (age <= 18)
    {
        printf("sorry,you are not eligible to drive a car\n");
    }
    else
    {
        printf("you are eligible for driving .");
    }
    return 0;
}
