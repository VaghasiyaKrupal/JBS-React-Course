#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a,b;
	clrscr();

	printf("Enter small number :");
	scanf("%d",&a);
	printf("Enter large number :");
	scanf("%d",&b);

	i=a;

	while(a<=b)
	{
		if(a%2==0)
		{
			printf("%d\t",a);
		}
		a++;
	}

	while(i<=b)
	{
		if(i%2==1)
		{
			printf("%d\t",i);
		}
		i++;
	}

	getch();
}