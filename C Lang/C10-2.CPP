#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i=1;
	clrscr();

	printf("Enter cube number :");
	scanf("%d",&num);

	do
	{
		printf("Cube of %d = %d\n",i,i * i * i);
		i++;
	}
	while(i<=num);

	getch();
}