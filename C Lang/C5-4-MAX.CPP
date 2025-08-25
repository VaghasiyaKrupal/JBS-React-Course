#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e;
	clrscr();

	printf("\tEnter A value :");
	scanf("%d",&a);
	printf("\tEnter B value :");
	scanf("%d",&b);
	printf("\tEnter C value :");
	scanf("%d",&c);
	printf("\tEnter D value :");
	scanf("%d",&d);
	printf("\tEnter E value :");
	scanf("%d",&e);

	(a>b)?(a>c)?(a>d)?(a>e)?printf("A is max"):printf("E is max"):
	(d>e)?printf("D is max"):printf("E is max"):
	(c>d)?(c>e)?printf("C is max"):printf("E is max"):
	(d>e)?printf("D is max"):printf("E is max"):

	(b>c)?(b>d)?(b>e)?printf("B is max"):printf("E is max"):
	(d>e)?printf("D is max"):printf("E is max"):
	(c>d)?(c>e)?printf("C is max"):printf("E is max"):
	(d>e)?printf("D is max"):printf("E is max");

	getch();
}