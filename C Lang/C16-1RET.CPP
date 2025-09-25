#include<stdio.h>
#include<conio.h>

int sum()
{
	int a=15,b=10,c;

	c=a+b;
	printf("Sum is: %d",c);
	return c;
}

int sub()
{
	int a,b,c;

	c=a-b;
	printf("\nSub is: %d",c);
	return c;
}

int multi()
{
	int a,b,c;

	c=a*b;
	printf("\nMulti is: %d",c);
	return c;
}

int div()
{
	float a,b,d;

	d=a/b;
	printf("\nDivi is: %f",d);
	return d;
}

void main()
{
	int c;
	float d;
	clrscr();

	c=sum();
	c=sub();
	c=multi();
	d=div();

	getch();
}