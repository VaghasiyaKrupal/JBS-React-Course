#include<stdio.h>
#include<conio.h>

void main()
{
	int a1[50][50],a2[50][50],a3[100][100],row,col,i,j;
	clrscr();

	printf("Enter row: ");
	scanf("%d",&row);
	printf("Enter column: ");
	scanf("%d",&col);

	// Input elements of first array
	printf("\nEnter elements of first matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}

	// Input elements of second matrix(a2)
	printf("Enter elements of second matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}

	// Add matrices and store in a3
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			a3[i][j]=a1[i][j] + a2[i][j];
		}
	}

	// Display a3 result
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a3[i][j]);
		}
		printf("\n");
	}

	getch();
}