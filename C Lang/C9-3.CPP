#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,sum=0;
	clrscr();

	printf("Enter Number :");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);

	getch();
}