#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[50][50],i,j,row,col,max=0;
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

	max<arr[i][j];

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(max<arr[i][j])
			{
				max=arr[i][j];
			}
		}
	}
	printf("Max is: %d",max);

	getch();
}