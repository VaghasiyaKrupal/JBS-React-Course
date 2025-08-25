#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[50][50],i,j,row,col,sum=0;
	clrscr();

	printf("Enter Rows: ");
	scanf("%d",&row);
	printf("Enter column: ");
	scanf("%d",&col);

	// Get elements of array
	printf("\nEnter array elements:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	// Sum of array elements
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum+=arr[i][j];
		}
	}

	printf("Sum of the array is: %d",sum);

	getch();
}

