#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	clrscr();

	printf("\tEnter A value :");
	scanf("%d",&a);
	printf("\tEnter B value :");
	scanf("%d",&b);
	printf("\tEnter C value :");
	scanf("%d",&c);
	printf("\tEnter D value :");
	scanf("%d",&d);

	(a>b)?(a>c)?(a>d)?printf("\tA is max"):printf("\tD is max"):
	(c<d)?printf("\tc is min"):printf("\td is min"):
	(b>c)?(b>d)?printf("\tB is max"):printf("\tD is max"):
	(c>d)?printf("\tC is max"):printf("\tD is max");


	getch();
}