#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	FILE *fptr;

	// create file using w mode
	fptr=fopen("C:\\TURBOC3\\Projects\\Krupal\\filename.txt","w");
	fprintf(fptr,"Sample C language file!");

/*	// Append file using a mode
	fptr=fopen("C:\\TURBOC3\\Projects\\Krupal\\filename.txt","a");
	fprintf(fptr,"\nHello!");            */

	fclose(fptr);

	getch();
}