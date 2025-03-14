#include <stdio.h>
#include <stdlib.h>

typedef struct nodeItem {
	
	int info;
	struct nodeItem *next;
	
} node;

typedef struct {
	
	node *first;
	
} linkedList;

node *newNode (int value);

linkedList *newList ();

int isListEmpty (linkedList *l);

void addList (linkedList *l, int value, int pos);

void showList (linkedList *l);

int length (linkedList *l);

int indexOf (linkedList *l, int value);

node *getNode (linkedList *l, int pos);

void delNodeByPosition (linkedList *l, int pos);

void delNodeByValue (linkedList *l, int value);

int main () {
	
	linkedList *l = newList();
	addList (l, 10, 0);
	addList (l, 20, 1);
	addList (l, 30, 0);
	addList (l, 40, 1);
	showList(l);
	delNodeByValue(l, 40);
	delNodeByPosition (l, 1);
	printf ("Posicao do valor 10: %d", indexOf(l, 10));
	
	return 0;
}

node *newNode (int value) {
	
	node *n = (node *) malloc (sizeof(node));
	
	n->info = value;
	n->next = NULL;
	
	return n;
}

linkedList *newList () {
	
	linkedList *l = (linkedList *) malloc (sizeof (linkedList));
	
	l->first = NULL;
	
	return l;
}

int indexOf (linkedList *l, int value) {
	
	int pos = -1;
	
	node *n = l->first;
	
	while (n != NULL) {
		
		pos++;

		if (n->info == value) return pos;
		n = n->next;
	}
	
	return -1;
}

node *getNode (linkedList *l, int pos) {
	
	node *n;
	
	if (pos < 0 || pos > length(l)) return NULL;
	
	n = l->first;
	while (pos > 0) {
		
		n = n->next;
		pos--;
	}
	
	return n;
	
	
}

void delNodeByPosition (linkedList *l, int pos) {
	
	node *ant, *n;
	
	ant = getNode(l, pos-1);
	
	if (ant == NULL) return;
	
		n = n->next;
	
	if (n != NULL) {
	
		ant->next = n->next;
		free(n);
	}
}


void delNodeByValue (linkedList *l, int value) {
	
	int pos = indexOf(l, value);
	
	while (pos >= 0) {
		
		delNodeByPosition(l, pos);
		pos = indexOf(l, value);
	}
}

isListEmpty (linkedList *l) {
	
	return l->first == NULL;
}

void addList (linkedList *l, int value, int pos) {
	
	int i;
	node *n, *ant;
	
	if (pos < 0 || pos > length(l)) return;
	
	n = newNode(value);
	
	if (pos == 0) {
		
		n->next = l->first;
		l->first = n;
		
	} else {
		
		ant = getNode(l, pos-1);
		
		n->next = ant->next;
		ant->next = n;
	}
}

void showList (linkedList *l) {
	
	node *n;
	n = l->first;
	
	printf ("Lista: \n\n");
	
	if (isListEmpty(l)) return;
	
	while (n != NULL) {
		
		printf ("%d ", n->info);
		n = n->next;
	}
	
	printf ("\n");
}

int length (linkedList *l) {
	
	node *n;
	int size = 0;
	
	n = l->first;
	
	while (n != NULL) {
		
		size++;
		n = n->next;
	}
	
	return size;
}
