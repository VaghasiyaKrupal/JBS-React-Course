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
		if(str[i]>=97 && str[i]<=90)
		{
			continue;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			continue;
		}
		else if(str[i]>=78 && str[i]<=57)
		{
			continue;
		}
		else if(str[i]==32)
		{
			continue;
		}
		else
		{
			count++;
		}
	}

	printf("Other character: %d",count);

	getch();
}