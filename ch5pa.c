#include<stdio.h>

int main(){
    int number=1,hours,overtime, overtime_pay;

    while(number<=10)
    {
        printf("no. of working hour for employee no. %d:",number);
        scanf("%d",&hours);
        if(hours>40)
        {
            overtime=hours-40;
            overtime_pay=overtime*12;
            printf("overtime pays is %d\n",overtime_pay);
        }
        else
        printf("employee work does not exceed 40 hours\n");
        number++;
    }
}