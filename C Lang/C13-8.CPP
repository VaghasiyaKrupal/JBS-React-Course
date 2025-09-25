#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[50],i,n,max=0;
	clrscr();

	printf("Enter Array: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("Max is: %d",max);

	getch();
}