#include <stdio.h>
#include <stdlib.h>

typedef struct nodeType {
	
	int info;
	struct nodeType *father;
	struct nodeType *left;
	struct nodeType *right;
	
} node;

node *makeTree (int val);

int info (node *n);

node *left (node *n);

node *right (node *n);

node *father (node *n);

node *brother (node *n);

int isLeft (node *n);

int isRight (node *n);

node *addLeft (node *tree, int val);

node *setNodeLeft (node *tree, node *n);

node *addRight (node *tree, int val);

node *setNodeRight (node *tree, node *n);

void freeTree (node *n);

void preOrder (node *n);

void inOrder (node *n);

void postOrder (node *n);


int main () {
	
	node *tree;
	
	tree = makeTree(14);
	
	addLeft(addLeft(tree, 4), 3);
	addRight(left(tree), 10);
	addLeft(addRight(tree, 22), 18);
	addRight(right(tree), 25);
	 
	printf ("Pre-Ordem: \n");
	preOrder(tree);
	
	printf ("\n\nEm ordem: \n");
	inOrder(tree);
	
	printf ("\n\nPos-Ordem: \n");
	postOrder(tree);
	
	return 0;	
}

node *makeTree (int val) {
	
	node *n = (node *) malloc (sizeof(node));
	
	n->info = val;
	n->father = NULL;
	n->left = NULL;
	n->right = NULL;
	
	return n;
}

int info (node *n) {
	
	return n->info;
}

node *left (node *n) {
	
	return n->left;
}

node *right (node *n) {
	
	return n->right;
}

node *father (node *n) {
	
	return n->father;
}

int isLeft (node *n) {
	
	if (father(n) == NULL) return 0;
		
	return n == left(father(n)); 
}

int isRight (node *n) {
	
	if (father(n) == NULL) return 0;
	
	return n == right(father(n));
}

node *brother (node *n) {

	if (father(n) == NULL) return NULL;	
	if (isLeft(n)) return right(father(n));
	else return left(father(n));
}

node *addLeft (node *tree, int val) {
	
	return setNodeLeft (tree, makeTree(val));
}

node *setNodeLeft (node *tree, node *n) {
	
	if (left(tree) != NULL) return NULL;
	
	tree->left = n;
	n->father = tree;
	
	return n;
}

node *addRight (node *tree, int val) {
	
	return setNodeRight (tree, makeTree(val));
}

node *setNodeRight (node *tree, node *n) {
	
	if (right(tree) != NULL) return NULL;
	
	tree->right = n;
	n->father = tree;
	
	return n;
}

void preOrder (node *n) {
	
	if (n != NULL) {
		
		printf ("[%d]", info(n));
		preOrder(left(n));
		preOrder(right(n));
	}
}

void inOrder (node *n) {
	
	if (n != NULL) {
		
		inOrder(left(n));
		printf("[%d]", info(n));
		inOrder(right(n));
	}
}

void postOrder (node *n) {
	
	if (n != NULL) {
		
		postOrder(left(n));
		postOrder(right(n));
		printf ("[%d]", info(n));
	}
}

void freeTree (node *n) {
	
	node *dad;
	
	if (n != NULL) {
	
		dad = father(n);
		if (father != NULL) {
			
			if (isLeft(n)) {
				
				dad->left = NULL;
				
			} else {
				
				dad->right = NULL;
			}
		}
		
		freeTree(left(n));
		freeTree(right(n));
		free(n);
	}
}
