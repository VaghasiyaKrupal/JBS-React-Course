#include<stdio.h>
#include<conio.h>

void main()
{
	long long rev=0,n,r;
	clrscr();

	printf("Enter number :");
	scanf("%lld",&n);

	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("%lld",rev);

	getch();
}