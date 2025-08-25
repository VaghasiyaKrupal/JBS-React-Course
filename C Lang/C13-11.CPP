#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[50],i,n;
	clrscr();

	printf("Enter array element: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("Arry[%d]:%d\n",i,arr[i]);
	}

	arr[3]=40;

	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	getch();
}