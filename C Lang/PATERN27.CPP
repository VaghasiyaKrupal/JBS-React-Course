#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j;
    clrscr();

    for (i = 0; i < 5; i++)
    {
	for (j = 0; j < 5; j++)
	{
	    if (j == 5 -1 || i == 0 || j == 5 - 1 - i)
	    {
		printf("* ");
	    }
	    else
	    {
		printf("  ");
	    }
	}
	printf("\n");
    }

    getch();
}