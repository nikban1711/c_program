/*Two numbers are input through the keyboard into two locations C 
and D. Write a program to interchange the contents of C and D*/
 
#include <stdio.h>
int main()
{
    int c, d;
    printf("enter c and d\n ");
    scanf("%d%d", &c, &d);
    c = c + d;
    d = c - d;
    c = c - d;

    printf("the value of c and d are %d %d", c, d);
    return 0;
}