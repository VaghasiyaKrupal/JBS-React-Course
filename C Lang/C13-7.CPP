#include<stdio.h>
#include<conio.h>

void main()
{
	int arry[50],i,n,sum=0;
	clrscr();

	printf("Enter n value: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arry[i]);
	}

	for(i=0;i<n;i++)
	{
		sum=sum+arry[i];
	}

	printf("Sum of array is: %d",sum);

	getch();

}