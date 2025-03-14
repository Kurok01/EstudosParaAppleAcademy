#include <stdio.h>
#include <stdlib.h>

typedef struct nodeItem {
	
	int info;
	struct nodeItem *next;
	
} node;

typedef struct {
	
	node *head, *tail;

} queue;

node *newNode (int info);

queue *newQueue ();

void enqueue (queue *q, int value);

int dequeue (queue *q);

int isQueueEmpty (queue *q);

void showQueue (queue *q);


int main () {
	
	queue *fila = newQueue();
	showQueue(fila);

	if (isQueueEmpty(fila)) {
		
		printf ("Esta vazia\n");
		
	} else {
		
		printf ("Nao esta vazia\n");
	}
	
	enqueue (fila, 10);
	enqueue (fila, 20);
	enqueue (fila, 30);
	enqueue (fila, 40);
	showQueue(fila);
	dequeue(fila);
	dequeue(fila);
	showQueue(fila);
}

node *newNode (int info) {
	
	node *n = (node *) malloc (sizeof (node));
	
	n->info = info;
	n->next = NULL;
	
	return n;
}

queue *newQueue () {
	
	queue *q = (queue *) malloc (sizeof (queue));
	
	q->head = NULL;
	q->tail = NULL;
	
}

void enqueue (queue *q, int value) {
	
	node *n = newNode(value);
	
	if (isQueueEmpty(q)) {
		
		q->head = n;
		q->tail = n;
		
	} else {
		
		q->tail->next = n;
		q->tail = n;
		
	}
}

int dequeue (queue *q) {
	
	node *n;
	int aux;
	
	if (isQueueEmpty(q)) return;
	
	n = q->head;
	aux = n->info;
	q->head = n->next;
	
	if (q->head == NULL) q->tail = NULL;
	
	free(n);
	
	return aux;
}

int isQueueEmpty (queue *q) {
	
	return q->head == NULL;
} 

void showQueue (queue *q) {
	
	node *aux;
	
	if (isQueueEmpty(q)) return; 
	
	printf ("\n\nFila: \n");
	
	aux = q->head;
	
	while (aux != NULL) {
		
		printf (" [%2d] ", aux->info);
		aux = aux->next;
	}
}
