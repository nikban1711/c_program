#include <stdio.h>
int main()
{
    int year, basicyear = 2001, leapyear, remaining_year, days, total_days;
    printf("enter year\n");
    scanf("%d", &year);
    year = (year ) - basicyear;
    leapyear = year / 4 - (year / 100) + (year / 400);
    remaining_year = year - leapyear;
    total_days = (remaining_year * 365) + (leapyear * 366) ;
    days = total_days % 7;
    if (days == 0)
        printf("monday");
    if (days == 01)
        printf("tuesday");
    if (days == 02)
        printf("wednesday");
    if (days == 03)
        printf("thrusday");
    if (days == 04)
        printf("friday");
    if (days == 05)
        printf("saturday");
    if (days == 06)
        printf("sunday");
    return 0;
}