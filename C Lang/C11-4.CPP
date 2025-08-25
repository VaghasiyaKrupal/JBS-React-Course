#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,divisor=0;
	clrscr();

	printf("Enter a number :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		divisor=divisor+(n%i==0)*1;
	}
	if(divisor==2)
	{
		printf("%d is prime number.\n",n);
	}
	else
	{
		printf("%d is not prime number.\n",n);
	}

	getch();
}