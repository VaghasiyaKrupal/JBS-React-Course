#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();

	printf("Enter number :");
	scanf("%d",&n);

	switch(n%2)
	{
		case 0:
			printf("Number is even");
			break;
		case 1:
			printf("Number is odd");
			break;
		default:
			printf("Please enter valid number.");

	}
	getch();
}