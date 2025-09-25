#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,j;
	clrscr();

	printf("Enter end point :");
	scanf("%d",&j);

	while(j>=i)
	{
		printf("%d\t",j);
		j--;
	}

	getch();
}