#include<stdio.h>
#include<conio.h>

int area_of()
{
	int area_of,m;

	printf("Enter area of (tri:1),(circ:2),(rect:3),(sqre:4): ");
	scanf("%d",&area_of);

	switch(area_of)
	{
		case 1:
		{
			float area,height,base;
			printf("Enter height: ");
			scanf("%f",&height);
			printf("Enter base: ");
			scanf("%f",&base);
			area= 0.5 * height * base;
			printf("Area of rectangle is: %.2f",area);
			m=area;
			break;
		}
		case 2:
		{
			float PI= 3.14, radius,area;
			printf("Enter area of: ");
			scanf("%f",&area_of);
			printf("Enter radius: ");
			scanf("%f",&radius);
			area=PI*radius*radius;
			printf("Area of circle is: %.2f",area);
			m=area;
			break;
		}
		case 3:
		{
			float length,width,area;
			printf("Enter length: ");
			scanf("%f",&length);
			printf("Enter width: ");
			scanf("%f",&width);
			area=length*width;
			printf("Area of rectangle is: %.2f",area);
			m=area;
			break;
		}
		case 4:
		{
			float side,area;
			printf("Enter side: ");
			scanf("%f",&side);
			area=side*side;
			printf("Area of square is: %.2f",area);
			m=area;
			break;
		}
		default:
		{
			printf("Wrong selection.");
		}
		return m;
	}
}

void main()
{
	int m;
	clrscr();

	m=area_of();

	getch();
}