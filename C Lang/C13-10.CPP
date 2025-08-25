#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[50],i,n,search,found=0;
	clrscr();

	printf("Enter arry element: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter arry element to serch in arry: ");
	scanf("%d",&search);

	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("Arry element found");
	}
	else
	{
		printf("Arry element not found");
	}

	getch();
}