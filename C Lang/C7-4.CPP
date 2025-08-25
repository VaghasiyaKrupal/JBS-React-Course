#include<stdio.h>
#include<conio.h>

void main()
{
    int unit;
    double bill = 0.0, surcharges = 0.0, total = 0.0;
    clrscr();

    printf("Please enter electricity units consumed: ");
    scanf("%d", &unit);
    printf("Entered unit is: %d\n", unit);

    if(unit <= 50)
    {
	bill = unit * 0.50;
    }
    else if(unit <= 150)
    {
	bill = 50 * 0.50 + (unit - 50) * 0.75;
    }
    else if(unit <= 250)
    {
	bill = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
    }
    else
    {
	bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
    }

    surcharges = bill * 0.20;
    total = bill + surcharges;

    printf("Your electricity bill is Rs.%.2lf\n", total);

    getch();
}
