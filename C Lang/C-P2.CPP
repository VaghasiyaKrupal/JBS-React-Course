#include<stdio.h>
#include<conio.h>

void main()
{
	float balance = 0.0, amount;
	int choice;
	clrscr();

	while(1)
	{
		printf("\n==== Bank Management System ====\n");
		printf("\t1. Deposit\n");
		printf("\t2. Withdraw\n");
		printf("\t3. Check Balance\n");
		printf("\t4. Exit\n");

		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				printf("Enter amount to deposit: ");
				scanf("%f", &amount);
				if (amount > 0)
				{
					balance += amount;
					printf("Amount Deposited: %.2f\n", amount);
				}
				else
				{
					printf("Invalid deposit amount!\n");
				}
				break;

			case 2:
				printf("Enter amount to withdraw: ");
				scanf("%f", &amount);

				if (amount > 0 && amount <= balance)
				{
					balance -= amount;
					printf("Amount Withdrawn successfully: %.2f\n", amount);
				}
				else if (amount > balance)
				{
					printf("Insufficient balance!\n");
				}
				else
				{
					printf("Invalid withdrawal amount!\n");
				}
				break;

			case 3:
				printf("Current Balance: %.2f\n", balance);
				break;

			case 4:
				printf("Thank you for using the Bank Management System.\n");
				break;

			default:
				printf("Invalid choice. Please try again.\n");
		}
	}
	getch();
}
