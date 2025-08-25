#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("Enter a value :");
	scanf("%d",&a);
	printf("Enter b value :");
	scanf("%d",&b);
	printf("Enter c value :");
	scanf("%d",&c);

	if(a<b && a<c)
	{
		printf("A is min");
	}
	else if(b<c)
	{
		printf("B is min");
	}
	else
	{
		printf("C is min");
	}
	getch();
}