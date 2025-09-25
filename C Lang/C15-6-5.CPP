#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
	int i;
	clrscr();

	printf("Enter string: ");
	gets(str);

	for(i=0;str[i];i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]+=32;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i]-=32;
		}
	}

	printf("%s",str);

	getch();
}