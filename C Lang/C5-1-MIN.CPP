#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	printf("\tEnter A value :");
	scanf("%d",&a);
	printf("\tEnter B value :");
	scanf("%d",&b);

	(a<b)?printf("\tA is min"):printf("\tB is min");
	getch();
}