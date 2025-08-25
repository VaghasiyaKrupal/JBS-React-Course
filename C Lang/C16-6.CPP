#include<stdio.h>
#include<conio.h>
#include<string.h>

void reverce()
{
	char str[50];
	printf("Enter string: ");
	gets(str);
	strrev(str);
	printf("Reverced string is: %s",str);
}

void main()
{
	clrscr();
	reverce();
	getch();
}