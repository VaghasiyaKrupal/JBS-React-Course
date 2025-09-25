#include<stdio.h>
#include<conio.h>

void main()
{
	int start, end, divisor, count=0, sum=0, i;
	clrscr();

	printf("Enter start number :");
	scanf("%d",&start);
	printf("Enter end number :");
	scanf("%d",&end);
	printf("Enter divisor :");
	scanf("%d",&divisor);

	i=start;

	do
	{
		if(i%divisor==0)
		{
			printf("%d ",i);
			count++;
			sum=sum+i;
		}
		i++;
	}
	while(i<=end);

	printf("Count of number :%d\n",count);
	printf("Sum of numbers :%d\n",sum);

	getch();
}