#include<stdio.h>
#include<conio.h>

struct Item{
    int id;
    char name[50];
};

struct Item i1 , items[100];

void main()
{
	int n, search_id, i,found=0;

	clrscr();

	printf("Enter number of items: ");
	scanf("%d", &n); // Number of items

	// Input items
	for(i = 0; i < n; i++)
	{
		printf("\nEnter Items: ");
		scanf("%d %s", &i1.id, i1.name);
		items[i]=i1;
	}

	// Input ID to search
	printf("\nEnter ID to search: ");
	scanf("%d", &search_id);

	// Search item
	for(i = 0; i < n; i++)
	{
		if(items[i].id == search_id)
		{
			printf("\nFound: %d %s\n", items[i].id, items[i].name);
			found=1;
			break;
		}
	}

	if(!found)
	{
		printf("\nNot found\n");
	}
	getch();
}