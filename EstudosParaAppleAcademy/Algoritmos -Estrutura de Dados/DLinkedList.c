#include <stdio.h>
#include <stdlib.h>

typedef struct nodeItem {
	
	int info;
	struct nodeItem *next;
	struct nodeItem *prev;
	
} node;

typedef struct {
	
	node *head;
	node *tail;
	
} dLinkedList;

dLinkedList *newList();

node *newNode (int value);

void addNode (dLinkedList *l, int value, int pos);

node *getNode (dLinkedList *l, int pos);

int isListEmpty (dLinkedList *l);

void showList (dLinkedList *l);

int length (dLinkedList *l);

int indexOf (dLinkedList *l, int value);

void delNodeByPosition (dLinkedList *l, int pos);

void delNodeByValue (dLinkedList *l, int value);


int main () {
	
	dLinkedList *l = newList ();
	
	addNode(l, 1, 1);
	addNode(l, 2, 2);
	addNode(l, 3, 3);
	addNode(l, 10, 4);
	delNodeByPosition(l, 2);
	showList(l);
	
	return 0;
}

dLinkedList *newList () {
	
	dLinkedList *l = (dLinkedList *) malloc (sizeof(dLinkedList));
	
	l->head = NULL;
	l->tail = NULL;
}

int isListEmpty (dLinkedList *l) {
	
	return l->head == NULL;
}

int length (dLinkedList *l) {
	
	int size = 0;
	node *n = l->head;
	
	while (n != NULL) {
		
		n = n->next;
		size++;
	}
	
	return size;
}

node *newNode (int value) {
	
	node *n = (node *) malloc (sizeof(node));
	
	n->info = value;
	n->next = NULL;
	n->prev = NULL;
	
	return n;
}

void addNode (dLinkedList *l, int value, int pos) {
	
	node *n, *ant;
	
	if (pos < 0 || pos > length(l)+1) return;
	
	n = newNode(value);
	
	if (isListEmpty(l)) {
	
		l->head = n;
		l->tail = n;
	
	} else if (pos == 0) {
		
		n->next = l->head;
		l->head->prev = n;
		l->head = n;
		
	} else if (pos == length(l)+1) {
		
		n->prev = l->tail;
		l->tail->next = n;
		l->tail = n;
		
	} else {
		
		ant = getNode(l ,pos-1);
		n->prev = ant;
		n->next = ant->next;
		ant->next->prev = n;
		ant->next = n;
	}
}

node *getNode (dLinkedList *l, int pos) {
	
	node *n = l->head;
	
	while (pos > 1) {
		
		n = n->next;
		pos--;
	}
	
	return n;
}

int indexOf (dLinkedList *l, int value) {
	
	int pos = 0;
	node *n = l->head;
	
	while (n != NULL) {
		
		if (n->info == value) return pos;
		
		pos++;
		n = n->next;
	}
	
	return -1;
}

void delNodeByPosition (dLinkedList *l, int pos) {
	
	node *n, *ant, *prox;
	
	if (pos == 0) {
		
		n = l->head;
		l->head = n->next;
		if (l->head != NULL)
			l->head->prev = NULL;
		else
			l->tail = NULL;
		
	} else if (pos == length(l) - 1) {
		
		n = l->tail;
		l->tail = n->prev;
		l->tail->next = NULL;
		
	} else {
		
		ant = getNode (l, pos-1);
		
		if (ant == NULL || n == NULL) return;
		
		n = ant->next;
		prox = n->next;
		ant->next = prox;
		if (prox != NULL)
			prox->prev = ant;
	}
	
	free(n);
}

void delNodeByValue (dLinkedList *l, int value) {
	
	int pos = indexOf(l, value);
	
	while (pos >= 0) {
		
		delNodeByPosition (l, pos);
		
		pos = indexOf(l, value);
	}
	
	
}

void showList (dLinkedList *l) {
	
	node *n = l->head;
	
	while (n != NULL) {
		
		printf ("%d ", n->info);
		n = n->next;
	}
	
	printf ("\n");
}
