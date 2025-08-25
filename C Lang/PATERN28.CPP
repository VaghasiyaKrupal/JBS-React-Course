#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j;
	clrscr();

	for (i = 0; i < 4; i++)
	{
		for (j=0; j<4-i-1; j++)
		{
			printf(" ");
		}
		printf("*");

		if (i != 0)
		{
			for (j= 0; j<(2*i-1); j++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}


	for (i = 4 - 2; i >= 0; i--)
	{
		for (j = 0; j < 4 - i - 1; j++)
		{
			printf(" ");
		}
		printf("*");

		if (i != 0)
		{
			for (j=0; j<(2*i-1); j++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}

	    getch();
}
