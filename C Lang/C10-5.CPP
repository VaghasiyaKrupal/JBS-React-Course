#include<stdio.h>
#include<conio.h>

void main()
{
    int password, confirm_password;
    int match;
    clrscr();

	printf("Enter password : ");
	scanf("%d", &password);
    do
    {
	printf("Confirm password : ");
	scanf("%d", &confirm_password);

	if (password == confirm_password)
	{
	    match = 1;
	    printf("Welcome.....\n");
	}
	else
	{
	    match = 0;
	    printf("Wrong passwords! Please enter the correct password.\n");
	}
    }
    while (match == 0);

    getch();
}