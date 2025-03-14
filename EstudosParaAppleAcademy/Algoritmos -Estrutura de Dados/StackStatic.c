#include <stdio.h>
#include <stdlib.h>
#define N 30

typedef struct {
	
	int top;
	int data[N];
	
} stack;

stack *newStack ();

void push (stack *s, int value);

int pop (stack *s);

int top (stack *s);

int isStackEmpty (stack *s);

int isStackFull (stack *s);

int main () {
	
	stack *p;
	
	p = newStack();
	
	push(p, 15);
	
	pop(p);
	
	printf ("Topo da Pilha: %d\n", top(p));
	
	if (isStackEmpty(p)) {
		
		printf ("Pilha Vazia\n");
	}
	
	if (isStackFull(p)) {
		
		printf ("Pilha Cheia\n");
	}
}

stack *newStack () {
	
	stack *p = (stack *) malloc (sizeof(stack));
	
	p->top = 0;
	
	return p;
}

int pop (stack *s) {
	
		if (isStackEmpty(s)) {
		
			printf ("StackUnderflow\n");
			return;
		
		} else {
			s->top--;
		}
	
	return s->data[s->top];
}

void push (stack *s, int value) {
	
	if (isStackFull(s)) {
		
		printf ("StackOverflow\n");
		return;
		
	} else {
	
		s->data[s->top] = value;
		s->top++;
	}
}

int top (stack *s) {
	
	if (isStackEmpty(s)) {
		
		printf ("StackUnderFlow\n");
		return;
		
	} else {
	
	return s->data[s->top - 1];
	}
}

int isStackEmpty (stack *s) {
	
	return s->top == 0;
}

int isStackFull (stack *s) {
	
	return s->top == N;
}
