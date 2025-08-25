#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[100],ch;
	int i,j;
	clrscr();

	printf("Enter string: ");
	gets(str);

	printf("character want to delete: ");
	scanf("%c",&ch);

	for(i=0,j=0;str[i];i++)
	{
		if(str[i]!=ch)
		{
		str[j]=str[i];
		j++;
		}
	}
	str[j]='\0';

	printf("%s",str);

	getch();
}