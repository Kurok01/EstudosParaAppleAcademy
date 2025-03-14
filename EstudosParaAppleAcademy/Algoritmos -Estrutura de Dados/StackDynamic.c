#include <stdio.h>
#include <stdlib.h>

typedef struct nodeItem {
	
	int info;
	struct nodeItem *next;
	
} node;

typedef struct {
	
	node *top;

} stack;

stack *newStack ();

node *newNode (int info);

void push (stack *s, int value);

int pop (stack *s);

int top (stack *s);

int isStackEmpty (stack *s);

//Sem isStackFull a menos que se defina um limite para a pilha

int main () {
	
	stack *p;
	
	p = newStack();
	
	if (isStackEmpty(p)) {
		
		printf ("Pilha Vazia ate esse momento\n");
	}
	
	push(p, 15);
	push(p, 25);
	
	printf ("Topo da Pilha: %d\n", top(p));
	pop(p);
	printf ("Topo da Pilha: %d\n", top(p));
}

stack *newStack () {
	
	stack *p = (stack *) malloc (sizeof(stack));
	
	p->top = NULL;
	
	return p;
}

node *newNode (int info) {
	
	node *n = (node *) malloc (sizeof(node));
	
	n->info = info;
	n->next = NULL;
	
	return n;
}

int pop (stack *s) {
	
	node *n;
	int aux = 0;
	
	if (isStackEmpty(s)) {
		
		printf ("StackUnderflow\n");
		return;
	}
		
	n = s->top; 
	aux = n->info;
	s->top = n->next;
	free(n);
		
	return aux;
}

void push (stack *s, int value) {
	
		node *n = newNode(value);
		
		n->next = s->top;
		s->top = n;
}

int top (stack *s) {
	
	if (isStackEmpty(s)) {
		
		printf ("StackUnderFlow\n");
		return;
		
	} else {
	
	return s->top->info;
	}
}

int isStackEmpty (stack *s) {
	
	return s->top == NULL;
}
