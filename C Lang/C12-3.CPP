#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0;
	clrscr();

	for(i=1;i<=10;i++)
	{
		printf("Enter number: ");
		scanf("%d",&n);

		if(n<0)
		{
			continue;
		}
		sum=sum+n;
	}

	printf("Sum of all number is: %d",sum);
	getch();
}
