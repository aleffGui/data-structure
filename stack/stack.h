typedef struct nodeType {
	int info;
	struct nodeType *link;	
}node;

void inicializesStack(node **L) {
	*L = NULL;
}
void printStack(node **L) {
	node *P;
	P = *L;
	if(P == NULL) {
		printf("\nEmpty Stack!");
	} else {
		printf("\nStack Items: ");
		while(P != NULL) {
			printf(" %d", P->info);
			P = P->link;
		}	
	}
	
}
void push(node **L, int x) {
	node *N;
	N = (node *) malloc(sizeof(node));
	N->info = x;
	N->link = *L;
	*L = N;
	
}
void pop(node **L, int *x) {
	node *aux;
	if(*L != NULL) {
		*x = (*L)->info;
		aux = *L;
		*L = (*L)->link;
		free(aux);	
	} else {
		*x = -1;
		printf("The stack is already empty!");
	}
	
}

