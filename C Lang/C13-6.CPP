#include<stdio.h>
#include<conio.h>

void main()
{
	int a1[50],a2[50],a3[100],i,j,n;
	clrscr();

	printf("Enter array: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}
	for(i=0;i<n;i++)
	{
		a3[i]=a1[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&a2[i]);
	}
	j=i;
	for(i=0;i<n;i++,j++)
	{
		a3[j]=a2[i];
	}
	for(i=0;i<n+n;i++)
	{
		printf("Array3[%d]:%d\n",i,a3[i]);
	}

	getch();
}