#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
	int i,count=0;
	clrscr();

	printf("Enter string: ");
	gets(str);

	for(i=0;str[i];i++)
	{
		if(str[i]=='a' || str[i]=='A')
		{
			count++;
		}
	}

	printf("%d",count);

	getch();
}