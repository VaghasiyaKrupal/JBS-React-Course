#include<stdio.h>
#include<conio.h>

int factorial()
{
	int fact=1,i,num;

	printf("Enter number: ");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}

	printf("Factorial is: %d",fact);
	return fact;
}

void main()
{
	int fact;
	clrscr();

	fact=factorial();

	getch();
}