#ifndef avl_tree
#define avl_tree

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
void AddData(NodeP root, int data);
NodeP* Find(NodeP root, int data);
bool FindData(NodeP root, int data);
int RefreshHeight(NodeP root);

#endif