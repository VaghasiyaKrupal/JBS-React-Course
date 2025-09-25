#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[50],i,n;
	clrscr();

	printf("Enter array value :");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}

	getch();
}