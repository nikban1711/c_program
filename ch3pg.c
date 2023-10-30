#include <stdio.h>
#include <math.h>
int main()
{
    int h, k, x, y, r, a;
    printf("enter coordinate of centre of circle\n");
    scanf("%d\n%d", &h, &k);
    printf("enter radius of circle\n");
    scanf("%d", &r);
    printf("enter point\n");
    scanf("%d\n%d", &x, &y);
    a = (pow((x - h), 2)) + (pow((y - k), 2));
    if (a < pow(r, 2))
        printf("(%d,%d) lies inside circle", x, y);
    else if ((a == pow(r, 2)))
        printf("(%d,%d) lies on circle", x, y);
    else
        printf("(%d,%d) lies outside circle", x, y);
    return 0;
}