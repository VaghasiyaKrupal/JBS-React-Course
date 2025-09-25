#include<stdio.h>
#include<conio.h>

struct Item {
    int id;
    char name[50];
};

void sortItems(struct Item items[], int n) {
    int i, j;
    struct Item temp;

    for(i = 0; i < n-1; i++) {
	for(j = 0; j < n-i-1; j++) {
	    if(items[j].id > items[j+1].id) {
		temp = items[j];
		items[j] = items[j+1];
		items[j+1] = temp;
	    }
	}
    }
}

void main() {
    struct Item items[100];
    int n, i;
    clrscr();

    printf("Enter number of items: ");
    scanf("%d", &n);
    //getchar(); // Clear newline from buffer

    if(n > 100 || n <= 0) {
	printf("Invalid number of items\n");

    }

    // Input items
    for(i = 0; i < n; i++) {
	printf("Enter Items: ");
	scanf("%d %s", &items[i].id, items[i].name);
    }

    // Sort items by id
    sortItems(items, n);

    // Display sorted items
    printf("\nSorted items by ID:\n");
    for(i = 0; i < n; i++) {
	printf("%d %s\n", items[i].id, items[i].name);
    }

    getch();
}