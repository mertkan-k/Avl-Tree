#include "avl_tree.h"

NodeP CreateTree()
{
	NodeP newNode = (NodeP) malloc(sizeof(Node));

	newNode->left = NULL;
	newNode->right = NULL;
	newNode->height = 0;

	return newNode;
}

NodeP CreateTreeWithData(int data)
{
	NodeP newNode = CreateTree();
	newNode->data = data;

	return newNode;
}