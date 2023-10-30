#include <stdio.h>
int main()
{

    int p;
    float r, n;

    printf("enter principle amount :\n");
    scanf("%d", &p);

    printf("the rate at which :\n");
    scanf("%f", &r);

    printf("for how much time:\n");
    scanf("%f", &n);

    float simple_interest = p * n * r / 100;

    printf("simple interest is %f", simple_interest);
    return 0;
}