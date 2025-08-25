#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=i;j>1;j--)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			if(j==5)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for(j=i+1;j<=5;j++)
		{
			if(j==5)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	getch();
}