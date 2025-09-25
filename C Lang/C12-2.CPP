#include<stdio.h>
#include<conio.h>

void main()
{
	int n,sum=0,avg;
	clrscr();

	while(1)
	{
		printf("Enter Number: ");
		scanf("%d",&n);

		if(n<0)
		{
			break;
		}
		sum=sum+n;
		avg=sum/n;
	}
	printf("Sum is: %d",sum);
	printf("\nAverage is: %d",avg);
	getch();
}