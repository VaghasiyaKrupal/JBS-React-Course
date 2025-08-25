#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
	int i,in_word=0;
	clrscr();

	printf("Enter string: ");
	gets(str);

	for(i=0;str[i];i++)
	{
		if(str[i]==32)
		{
			in_word=0;
		}
		else if(in_word==0)
		{
			if(str[i]>=97 && str[i]<=122)
			{
				str[i]=str[i]-32;
			}
			in_word=1;
		}
		else if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
	}

	printf("%s",str);

	getch();
}
