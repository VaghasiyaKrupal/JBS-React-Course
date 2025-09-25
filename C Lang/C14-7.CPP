#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[50][50],i,j,row,col,min;
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

	min=arr[0][0];

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]<min)
			{
				min=arr[i][j];
			}
		}
	}

	printf("Min is: %d", min);

	getch();
}