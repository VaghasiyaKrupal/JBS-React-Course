#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();

	printf("\tEnter A value :");
	scanf("%d",&a);
	printf("\tEnter B value :");
	scanf("%d",&b);
	printf("\tEnter C value :");
	scanf("%d",&c);

	(a>b)?(a>c)?printf("\tA is max"):printf("\tC is max"):
	(b>c)?printf("\tB is max"):printf("\tC is max");

	getch();
}