#include <stdio.h>

int main()
{
    int r;
    float pi, area;

    printf("enter the radius of circle:\n", r);
    scanf("%d", &r);

    pi = 3.14;
    area = pi * r * r;

    printf("area of circle is %f", area);
    return 0;
}