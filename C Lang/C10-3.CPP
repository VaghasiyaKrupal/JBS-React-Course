#include<stdio.h>
#include<conio.h>

void main()
{
	int sum=0,n,r;
	clrscr();

	printf("Enter a number :");
	scanf("%d",&n);

	do
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	while(n>0);

	printf("Sum of digits :%d\n",sum);

	getch();
}