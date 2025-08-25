#include<stdio.h>
#include<conio.h>

void sum()
{
	int a=15,b=10,c;

	c=a+b;
	printf("Sum is: %d",c);
}

void sub()
{
	int a,b,c;

	c=a-b;
	printf("\nSub is: %d",c);
}

void multi()
{
	int a,b,c;

	c=a*b;
	printf("\nMulti is: %d",c);
}

void div()
{
	int a,b,c;

	c=a/b;
	printf("\nDivi is: %d",c);
}

void main()
{
	clrscr();

	sum();
	sub();
	multi();
	div();

	getch();
}