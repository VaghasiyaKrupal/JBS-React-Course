#include<stdio.h>
#include<conio.h>

void main()
{
	int a=5,b=10,c;
	clrscr();

	int* ptr_a=&a;
	int* ptr_b=&b;

	printf("%d\n%d",a,b);

	c=*ptr_a;
	*ptr_a=*ptr_b;
	*ptr_b=c;

	printf("\nSwaped memory address is:\n%d\n%d",a,b);

	getch();
}

