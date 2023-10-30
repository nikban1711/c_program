#include<stdio.h>
#include<conio.h>
int main()
{
	
	int num, ans = 0, temp, i;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	for(i = 1; num; i *= 10)
	{
		temp = num % 8;
		ans += temp*i;
		num /= 8;
	}
	
	//To check, octal eq. of 15 is 17.
	
	printf("\n\n%d is the octal equivalent of %d.", ans, num);
	getch();
	return 0;
}
