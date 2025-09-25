#include<stdio.h>
#include<conio.h>
#include<string.h>

struct {
	int price;
	float ave;
	char name[100];
}c1,c2;

void main()
{
	clrscr();
	c1.price=10000;
	printf("car1\nprice:%d",c1.price);
	strcpy(c1.name,"verna");
	printf("\nanme:%s",c1.name);
	getch();
}