#include<conio.h>
#include<stdio.h>

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

	(a<b)?(a<c)?(a<d)?printf("\tA is min"):printf("\tD is min"):
	(c<d)?printf("\tc is min"):printf("\td is min"):
	(b<c)?(b<d)?printf("\tB is min"):printf("\tD is min"):
	(c<d)?printf("\tC is min"):printf("\tD is min");

	getch();

}