#include<stdio.h>
#include<conio.h>

void main()
{
	int s1,s2,s3,s4,s5;
	clrscr();

	printf("Enter s1 marks :");
	scanf("%d",&s1);
	printf("Enter s2 marks :");
	scanf("%d",&s2);
	printf("Enter s3 marks :");
	scanf("%d",&s3);
	printf("Enter s4 marks :");
	scanf("%d",&s4);
	printf("Enter s5 marks :");
	scanf("%d",&s5);

	int total=s1+s2+s3+s4+s5;
	printf("\nTotal marks is :%d",total);

	float per=total/5;
	printf("\nTotal percentage is :%.2f",per);


	// Find maximum using ternary operator
	int max = (s1 > s2) ? s1 : s2;
	max = (max > s3) ? max : s3;
	max = (max > s4) ? max : s4;
	max = (max > s5) ? max : s5;

	printf("\nYou got maximum marks : %d", max);

	if (max == s1) printf("\nSubject S1 has the max marks");
	else if (max == s2) printf("\nSubject S2 has the max marks");
	else if (max == s3) printf("\nSubject S3 has the max marks");
	else if (max == s4) printf("\nSubject S4 has the max marks");
	else printf("\nSubject S5 has the max marks");

	// Find minimum using ternary operator
	int min = (s1 < s2) ? s1 : s2;
	min = (min < s3) ? min : s3;
	min = (min < s4) ? min : s4;
	min = (min < s5) ? min : s5;

	printf("\nYou got minimum marks : %d", min);

	if (min == s1) printf("\nSubject S1 has the min marks");
	else if (min == s2) printf("\nSubject S2 has the min marks");
	else if (min == s3) printf("\nSubject S3 has the min marks");
	else if (min == s4) printf("\nSubject S4 has the min marks");
	else printf("\nSubject S5 has the min marks");

	if(per>=90)
	{
		printf("\nA+ Grade");
	}
	else if(per>=80 && per<=90)
	{
		printf("\nB+ Grade");
	}
	else if(per>=70 && per<=80)
	{
		printf("\nC+ Grade");
	}
	else if(per>=60 && per<=70)
	{
		printf("\nD Grade");
	}

	if(per>=38)
	{
		printf("\nCongratulations, You are pass");
	}
	else
	{
		printf("Sorry, You are failed! Better luck next time.");
	}

	getch();
}
