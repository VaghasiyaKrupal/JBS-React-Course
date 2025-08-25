#include<stdio.h>
#include<conio.h>

void main()
{
	int fact=1,a,b;
	clrscr();

	printf("Enter A value :");
	scanf("%d",&a);
	printf("Enter B value :");
	scanf("%d",&b);

	while(a<=b)
	{
		fact=fact*a;
		a++;
	}
	printf("%d",fact);

	getch();
}