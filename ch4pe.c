/*If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("enter sides of triangle\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    
      if (a == b && b == c)
            printf("triangle is equilateral\n");
        else if (a == b || b == c || c == a)
            printf("triangle is isosceles\n");
        else
            printf("triangle is scalene\n");
    
    
    if ((a = sqrt(pow(b, 2) + pow(c, 2))) || (b = sqrt(pow(c, 2) + pow(a, 2))) || (c = sqrt(pow(a, 2) + pow(b, 2))))
        printf("triangle is right angles");
    else 
        printf("not a right angle");
   
    return 0;
}