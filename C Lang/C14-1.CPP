#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[50][50]={{10,20,30},{40,50,60}},i,j,n,m;
	clrscr();
     /*	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}                                   */
	printf("Enter row arry element: ");
	scanf("%d",&n);
	printf("Enter column arry element: ");
	scanf("%d",&m);

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	getch();
}