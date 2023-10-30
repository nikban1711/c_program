#include<stdio.h>
int main()
{
    int a,b,i,result=1;
    printf("enter a and b :");
    scanf("%d\n%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        result=result*a;
    }
    printf("%d",result);
    return 0;
}
