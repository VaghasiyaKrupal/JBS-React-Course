#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	clrscr();
	printf("Enter num value :");
	scanf("%d",&num);

	if(num>0)
	{
		printf("Number is positive");
	}
	else if(num<0)
	{
		printf("Number is negative");
	}
	else
	{
		printf("Number is 0(Zero)");
	}
	getch();
}