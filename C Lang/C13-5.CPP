#include<stdio.h>
#include<conio.h>

void main()
{
	int a1[50],a2[50],i,n;
	clrscr();

	printf("Enter array value: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}

	for(i=n-1;i>=0;i--)
	{
		a2[i]=a1[i];
		printf("Arry2 %d\n",a1[i]);
	}

	getch();
}