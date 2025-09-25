#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
	int i,word=1;
	clrscr();

	printf("Enter String:");
	gets(str);

	for(i=0;str[i];i++)
	{
		if(str[i]==32)
		word++;
	}
	printf("%d",word);
	getch();
}