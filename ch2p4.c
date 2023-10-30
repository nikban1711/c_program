/*Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r, ).
Hint: r = sqrt ( x2
+ y2
) and tan-1
( y / x )*/
#include <stdio.h>
#include <math.h>
int main()
{
    float x, y;
    printf("enter the cartesian coordinates\n");
    scanf("%f  %f", &x, &y);
    double r, phi;
    r = sqrt((x * x) + (y * y));
    phi = atan(y / x);
    printf("the polar coordinates are(%lf, %lf)", r, phi);
    return 0;
}