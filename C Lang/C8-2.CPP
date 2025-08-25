#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();

	printf("Enter week number :");
	scanf("%d",&n);

	switch(n)
	{
		case 1:
			printf("Day 1\n");
			printf("Sunday");
			break;
		case 2:
			printf("Day 2\n");
			printf("Monday");
			break;
		case 3:
			printf("Day 3\n");
			printf("Tuesday");
			break;
		case 4:
			printf("Day 4\n");
			printf("Wednesday");
			break;
		case 5:
			printf("Day 5\n");
			printf("Thursday");
			break;
		case 6:
			printf("Day 6\n");
			printf("Friday");
			break;
		case 7:
			printf("Day 7\n");
			printf("Saturday");
			break;
		default:
			printf("Wrong number");
	}
	getch();
}