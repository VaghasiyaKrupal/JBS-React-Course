#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[100];
	int i;
	clrscr();

	printf("Enter string: ");
	gets(str);

	printf("%s",strlwr(str));

	getch();
}