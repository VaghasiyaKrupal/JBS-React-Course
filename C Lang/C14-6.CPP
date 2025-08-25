#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[50][50],i,j,row,col,sum=0;
	clrscr();

	printf("Enter rows: ");
	scanf("%d",&row);
	printf("Enter column: ");
	scanf("%d",&col);

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	printf("Show matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<row;i++)
	{
		sum=0;
		for(j=0;j<col;j++)
		{
			sum=sum+arr[i][j];
		}
		printf("Row %d sum is: %d\n",i+1,sum);
	}

	getch();
}