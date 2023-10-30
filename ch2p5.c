/*Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the
distance (D) between them in nautical miles. The formula for
distance in nautical miles is:
D = 3963 cos
-1
( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )*/

#include <stdio.h>
#include <math.h>
int main()
{
    float l1, l2, g1, g2, d, pi;

    printf("enter the latitude(L1,L2)\n");
    scanf("%f %f", &l1, &l2);
    printf("enter the longitude(G1,G2)\n");
    scanf("%f%f", &g1, &g2);
    pi = 3.141592;
    l1 = l1 * (pi / 180);
    l2 = l2 * (pi / 180);
    g1 = g1 * (pi / 180);
    g2 = g2 * (pi / 180);
    d = 3963 * acos((sin(l1) * sin(l2)) + (cos(l1) * cos(l2)) * cos(g2 - g1));
    printf("the distance between two places in nauticle mailes is %f", d);
    return 0;
}