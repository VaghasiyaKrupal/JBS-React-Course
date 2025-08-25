#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	clrscr();

	printf("Enter num value:");
	scanf("%d",&num);

	if(num>10)
	{
		printf("JBS");
	}
	else if(num<10)
	{
		printf("It Institute");
	}
	else
	{
		printf("JBS IT INSTITUTE");
	}

	getch();
}