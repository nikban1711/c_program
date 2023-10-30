/*Consider a currency system in which there are notes of seven
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If
a sum of Rs. N is entered through the keyboard, write a program to
compute the smallest number of notes that will combine to give Rs.
N*/
#include <stdio.h>
int main(){

    int n, n100, n50, n10, n5, n2, n1;
    printf("enter total rupees\n");
    scanf("%d", &n);

    n100 = n / 100;
    n = n % 100;

    n50 = n / 50;
    n = n % 50;

    n10 = n / 10;
    n = n % 10;

    n5 = n / 5;
    n = n % 5;

    n2 = n / 2;
    n = n % 2;

    n1 = n / 1;
    printf("number of Rs100 notes are %d\n", n100);
    printf("number of Rs50 notes are %d\n", n50);
    printf("number of Rs10 notes are %d\n", n10);
    printf("number of Rs5 notes are %d\n", n5);
    printf("number of Rs2 notes are %d\n", n2);
    printf("number of Rs1 notes are %d\n", n1);

    printf("minimum number of notes requires are %d", n100 + n50 + n10 + n5 + n2 + n1);
    return 0;
}
