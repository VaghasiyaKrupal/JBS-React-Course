#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	clrscr();

	printf("Enter a value :");
	scanf("%d",&a);
	printf("Enter b value :");
	scanf("%d",&b);
	printf("Enter c value :");
	scanf("%d",&c);
	printf("Enter d value :");
	scanf("%d",&d);

	if(a>b && a>c && a>d)
	{
		printf("A is max");
	}
	else if(b>c && b>d)
	{
		printf("B is max");
	}
	else if(c>d)
	{
		printf("C is max");
	}
	else
	{
		printf("D is max");
	}
	getch();
}