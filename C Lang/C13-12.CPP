#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[50],i,n,ele,pos;
	clrscr();

	printf("Enter number of arry element: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the element you want to insert: ");
	scanf("%d",&ele);
	printf("Enter the position where you want to insert element: ");
	scanf("%d",&pos);

	for(i=n;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}

	arr[pos-1]=ele;
	n++;

	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	getch();
}