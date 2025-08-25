#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[50],i,n,min;
	clrscr();

	printf("Enter arry element :");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}

	printf("Minimum element value is: %d",min);

	getch();
}