#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	pos:
	sum=sum+n;
	n--;
	if(n>0)
	{
		goto pos;
	}
	printf("Sum of number is :%d",sum);

	getch();
}