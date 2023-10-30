/*If lengths of three sides of a triangle are input through the 
keyboard, write a program to find the area of the triangle.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float s, area;
    printf("enter sides of triangle\n");
    scanf("%d \n %d \n %d", &a, &b, &c);
    s = (a + b + c) / 2;

    area = sqrt((s) * (s - a) * (s - b) * (s - c));
    printf("the area of triangle is %f", area);
    return 0;
}
