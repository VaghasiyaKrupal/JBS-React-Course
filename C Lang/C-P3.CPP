#include<stdio.h>
#include<conio.h>

void main()
{
	int num1,num2;
	char op;
	clrscr();

	printf("Enter First number :");
	scanf("%d",&num1);
	printf("\nEnter Second number :");
	scanf("%d",&num2);
	printf("\nEnter operators (+,-,*,/) :");
	scanf(" %c",&op);

	switch(op)
	{
		case '+':
			printf("\nAddition is :%d",num1+num2);
			break;
		case '-':
			printf("\nSubstraction is :%d",num1-num2);
			break;
		case '*':
			printf("\nMultiplication is :%d",num1*num2);
			break;
		case '/':
			printf("\nDivision is :%d",num1/num2);
			break;
		default:
			printf("\nWrong Operator");
	}
	getch();
}