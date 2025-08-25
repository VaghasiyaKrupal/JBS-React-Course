#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	printf("Enter a value :");
	scanf("%d",&a);
	printf("Enter b value :");
	scanf("%d",&b);

	if(a<b)
	{
		printf("A is min");
	}
	else
	{
		printf("B is min");
	}
	getch();
}