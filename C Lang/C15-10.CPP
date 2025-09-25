#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[100];
	clrscr();

	printf("Enter string: ");
	gets(str);

	printf("%s",strrev(str));

	getch();
}