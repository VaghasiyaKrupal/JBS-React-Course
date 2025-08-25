#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();
	FILE *fptr;

	// Read file using r mode
	fptr=fopen("C:\\TURBOC3\\Projects\\Krupal\\filename.txt","r");
	char str[100];

	while(fgets(str,100,fptr))
	{
		printf("%s",str);
	}

	fclose(fptr);

	getch();
}