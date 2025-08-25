#include<stdio.h>
#include<conio.h>

void main()
{
	int age=28;
	int* ptr = &age;
	clrscr();

	printf("%d",age);
	printf("\n%p",&age);
	printf("\n%d",*ptr);

	getch();
}