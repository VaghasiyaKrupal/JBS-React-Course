#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e;
	clrscr();

	printf("Enter a value :");
	scanf("%d",&a);
	printf("Enter b value :");
	scanf("%d",&b);
	printf("Enter c value :");
	scanf("%d",&c);
	printf("Enter d value :");
	scanf("%d",&d);
	printf("Enter e value :");
	scanf("%d",&e);

	if(a<b && a<c && a<d && a<e)
	{
		printf("A is min");
	}
	else if(b<c && b<d && b<e)
	{
		printf("B is min");
	}
	else if(c<d && c<e)
	{
		printf("C is min");
	}
	else if(d<e)
	{
		printf("D is min");
	}
	else
	{
		printf("E is min");
	}

	getch();
}