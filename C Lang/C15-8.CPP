#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[100],pos,rep;
	int i;
	clrscr();

	printf("Enter string: ");
	gets(str);
	printf("Where you want to replace: ");
	scanf("%c",&pos);
	getchar();
	printf("Enter character to replace: ");
	scanf("%c",&rep);

	for(i=0;str[i];i++)
	{
		if(str[i]==pos)
		{
			str[i]=rep;
		}
	}

	printf("%s",str);

	getch();
}