#include<stdio.h>
#include<conio.h>

void factorial()
{
	int fact=1,i,num;

	printf("Enter number: ");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}

	printf("Factorial is: %d",fact);
}

void main()
{
	clrscr();

	factorial();

	getch();
}