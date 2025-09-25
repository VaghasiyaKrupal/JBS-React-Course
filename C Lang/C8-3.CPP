#include<stdio.h>
#include<conio.h>

void main()
{
	int month;
	clrscr();

	printf("Enter month :");
	scanf("%d",&month);

	switch(month)
	{
		case 1:
			printf("Month 1\n");
			printf("January\n");
			printf("31 Days in January");
			break;
		case 2:
			printf("Month 2\n");
			printf("Februaary\n");
			printf("28 Days in February");
			break;
		case 3:
			printf("Month 3\n");
			printf("March\n");
			printf("31 Days in March");
			break;
		case 4:
			printf("Month 4\n");
			printf("April\n");
			printf("30 Days in April");
			break;
		case 5:
			printf("Month 5\n");
			printf("May\n");
			printf("31 Days in May");
			break;
		case 6:
			printf("Month 6\n");
			printf("June\n");
			printf("30 Days in June");
			break;
		case 7:
			printf("Month 7\n");
			printf("July\n");
			printf("31 Days in July");
			break;
		case 8:
			printf("Month 8\n");
			printf("August\n");
			printf("31 Days in August");
			break;
		case 9:
			printf("Month 9\n");
			printf("September\n");
			printf("30 Days in Suptember");
			break;
		case 10:
			printf("Month 10\n");
			printf("October\n");
			printf("31 Days in October");
			break;
		case 11:
			printf("Month 11\n");
			printf("November\n");
			printf("30 Days in November");
			break;
		case 12:
			printf("Month 12\n");
			printf("December\n");
			printf("31 Days in December");
			break;
		default:
			printf("Wrong Number");
	}
	getch();
}