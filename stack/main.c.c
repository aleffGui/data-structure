#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main () {
	node *L;
	int answer, x, y;
	inicializesStack(&L);
	do {
		printf("\n");
		printf("\n----------------------------------------");
		printf("\n(1) - Run push\n(2) - Run pop\n(3) - Print Stack\n(0) - Exit");
		printf("\n----------------------------------------");
		printf("\nChoose an option: ");
		scanf("%d", &answer);
		system("cls");
		switch(answer) {
			case 1:
				printf("\nType the item to be iserted into the stack: ");
				scanf("%d", &x);
				push(&L, x);
				break;	
			case 2:
				pop(&L, &y);
				if(y > 0) {
					printf("\nItem %d successfully removed!", y);	
				}
				break;
			case 3:
				printStack(&L);
				break;
			default:
				if(answer != 0)
				printf("\nInvalid option!");
				break;			
		}
	}while(answer != 0);
	printf("\nYou chose to leave.");
	return 0;
}
