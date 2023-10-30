#include <stdio.h>
int main()
{
    int inttype;
    short int shortinttype;
    long int longinttype;
    float floattype;
    double doubletype;
    char chartype;
printf( "%d \n", sizeof(inttype));
printf( "%d \n", sizeof(shortinttype));
printf( "%d \n", sizeof(longinttype));
printf( "%d \n", sizeof(floattype));
printf( "%d \n", sizeof(doubletype));
printf( "%d \n", sizeof(chartype));
return 0;
}