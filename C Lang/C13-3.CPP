#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[50],i,n;
	clrscr();

	printf("Enter n value :");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
	}

	getch();
}