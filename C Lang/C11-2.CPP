#include<stdio.h>
#include<conio.h>

void main()
{
	int n,r,arm=0,i;
	clrscr();

	printf("Enter a number :");
	scanf("%d",&n);

	for(i=n;n!=0;)
	{
		r=n%10;
		arm=arm+(r*r*r);
		n=n/10;
	}
	if(i==arm)
	{
		printf("Armstrong number.");
	}
	else
	{
		printf("Not armstrong number.");
	}

	getch();
}