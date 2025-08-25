#include<stdio.h>
#include<conio.h>

int swap(int a,int b)
{
	int c,m;
	/* printf("Enter A value: ");
	scanf("%d",&a);
	printf("Enter B value: ");
	scanf("%d",&b); */
	c=a;
	a=b;
	b=c;
	printf("Value of A is: %d\nValue of B is: %d",a,b);
	m=c;
	return m;
}


void main()
{
	int m;
	clrscr();

	m=swap(2,6);
	getch();
}