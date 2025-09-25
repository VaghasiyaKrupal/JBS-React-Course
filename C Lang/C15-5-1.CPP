#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
	int i,lenth=0;
	clrscr();

	printf("Enter string: ");
	gets(str);

	for(i=0;str[i];i++)
	{
		lenth++;
	}
	printf("%d",lenth);

	getch();
}