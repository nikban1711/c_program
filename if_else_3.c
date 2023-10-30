#include <stdio.h>

int main()
{
    int age;
    int response;
    printf("enter your age\n");
    scanf("%d", &age);
    if (age <= 18)
    {
        printf("you are not eligible for driving");
    }

       else
    {
        printf("you are eligible for driving\n");
        return 0;
    }
}
