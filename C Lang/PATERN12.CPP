#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,n=5;
	clrscr();

	for(i=0;i<n;i++)
	{
		for(j=0;j<i*2;j++)
		{
			printf(" ");
		}
		for(j=1;j<=5-i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

	getch();
}