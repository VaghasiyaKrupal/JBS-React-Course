#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&num);

	for(i=0;num[i];i++)
	{
	if((num>=65 && num <=90) || (num>=97 && num>=122))
	{
	printf("%d",num);
	}
	}

	printf("%c",num);

	getch();
}