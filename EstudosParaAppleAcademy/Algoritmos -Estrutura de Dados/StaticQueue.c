#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct {
	
	int head, tail;
	int data[N];
	
} queue;

queue *newQueue ();

void enqueue (queue *q, int value);

int dequeue (queue *q);

int isQueueEmpty (queue *q);

int isQueueFull (queue *q);

void showQueue (queue *q);

int main () {
	
	queue *fila = newQueue();
	showQueue(fila);

	if (isQueueEmpty(fila)) {
		
		printf ("Esta vazia\n");
		
	} else {
		
		printf ("Nao esta vazia\n");
	}
	
	if (isQueueFull(fila)) {
		
		printf ("Esta cheia\n");
		
	} else {
		
		printf ("Nao esta cheia\n");
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

queue *newQueue () {
	
	queue *q = (queue *) malloc (sizeof (queue));
	
	q->head = 0;
	q->tail = 0;
	
}

void enqueue (queue *q, int value) {
	
	if (isQueueFull(q)) return;
	
	q->data[q->tail % N] = value;
	q->tail++;
}

int dequeue (queue *q) {
	
	int aux;
	
	if (isQueueEmpty(q)) return;
	
	aux = q->data[q->head % N];
	q->head++;
	
	return aux;
}

int isQueueEmpty (queue *q) {
	
	return q->head == q->tail;
} 

int isQueueFull (queue *q) {
	
	return q->head - q->tail == N;
}

void showQueue (queue *q) {
	
	int i;
	
	if (isQueueEmpty(q)) return; 
	
	printf ("\n\nFila: \n");
	
	for (i = q->head; i < q->tail; i++) {
		
		printf (" [%2d] ", q->data[i % N]);
	}
}
