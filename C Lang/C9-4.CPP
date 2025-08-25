#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	printf("Enter starting number :");
	scanf("%d",&i);
	printf("Enter ending number :");
	scanf("%d",&j);

	while(i<=j)
	{
		printf("%d",i);
		i++;
	}

	getch();
}