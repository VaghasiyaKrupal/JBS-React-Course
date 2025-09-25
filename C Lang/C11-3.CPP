#include<stdio.h>
#include<conio.h>

void main()
{
	long long i,rev=0,n,r;
	clrscr();

	printf("Enter number :");
	scanf("%lld",&n);

	for(i=n;i!=0;)
	{
		//i=i/10;
		r=i%10;
		rev=rev*10+r;
		i=i/10;
	}
	if(rev==n)
	{
		printf("Palindrome number");
	}
	else
	{
		printf("Not Palindrome number");
	}

	getch();
}