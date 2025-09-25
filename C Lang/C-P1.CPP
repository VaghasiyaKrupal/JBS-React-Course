#include<stdio.h>
#include<conio.h>

void main()
{
	float basic_salary, incentive, pf;
	float gross_salary, net_salary;
	clrscr();

	printf("Enter Basic Salary of Faculty: ");
	scanf("%f", &basic_salary);

	incentive = 0.20 * basic_salary;  // 20% incentive
	pf = 0.08 * basic_salary;         // 8% PF

	gross_salary = basic_salary + incentive;
	net_salary = gross_salary - pf;

	printf("\n--- Salary Breakdown ---\n");
	printf("Basic Salary   : %.2f\n", basic_salary);
	printf("Incentive      : %.2f\n", incentive);
	printf("Gross Salary   : %.2f\n", gross_salary);
	printf("PF Deduction   : %.2f\n", pf);
	printf("Net Salary     : %.2f\n", net_salary);

	getch();
}
