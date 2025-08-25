#include<stdio.h>
#include<conio.h>

int max(int a,int b,int c)
{
	int m;
	if(a>b && a>c)
	{
		m=a;
		printf("A is max");
	}
	else if(b>c)
	{
		m=b;
		printf("B is max");
	}
	else
	{
		m=c;
		printf("C is max");
	}
	return m;
}

void main()
{
	int m;
	clrscr();

	m=max(1,6,9);

	getch();
}