#ifndef avl_tree
#define avl_tree

#include <stdlib.h>

struct node
{
	int data;
	int height;
	struct node* left;
	struct node* right;
};

typedef struct node Node;
typedef struct node* NodeP;

NodeP CreateTree();
NodeP CreateTreeWithData(int data);

#endif