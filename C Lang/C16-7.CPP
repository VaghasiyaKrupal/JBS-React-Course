#include<stdio.h>
#include<conio.h>
#include<string.h>

void sortlist()
{
	char names[5][20];
	char temp[20];
	int i,j;

	printf("Enter 5 names: \n");
	for(i=0;i<5;i++)
	{
		scanf("%s",names[i]);
	}

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(strcmp(names[j],names[j+1])>0)
			{
				strcpy(temp,names[j]);
				strcpy(names[j],names[j+1]);
				strcpy(names[j+1],temp);
			}
		}
	}

	printf("Sorted names: \n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",names[i]);
	}
}

void main()
{
	clrscr();
	sortlist();
	getch();
}