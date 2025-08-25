#include<stdio.h>
#include<conio.h>

void main()
{
	int arry1[50],arry2[50],i,n;
	clrscr();

	printf("Enter arry value: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arry1[i]);
	}

	for(i=0;i<n;i++)
	{
		arry2[i]=arry1[i];
		printf("arry2:%d\n",arry2[i]);
	}
	getch();
}