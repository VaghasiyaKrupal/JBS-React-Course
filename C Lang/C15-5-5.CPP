#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
	int count=0;
	clrscr();

	printf("Enter String:");
	gets(str);

	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			count++;
		}
	}

	printf("%d",count);

	getch();
}