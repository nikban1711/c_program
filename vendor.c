#include <stdio.h>
int main()
{
    int rate, quantity;

    printf("enter the rate of fruit :\n", rate);
    scanf("%d", &rate);

    printf("enter number of fruit sold :\n", quantity);
    scanf("%d", &quantity);

    printf("today sales %d", rate * quantity);
    return 0;
}