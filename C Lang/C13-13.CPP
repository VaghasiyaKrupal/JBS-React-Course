#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[50],i,n,pos;
	clrscr();

	printf("Enter number of arry elements: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter position to delete: ");
	scanf("%d",&pos);

	// Move elements to left
	for(i=pos-1;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n--; //Reduce array size

	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}

	getch();
}