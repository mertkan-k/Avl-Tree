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

bool IsExistsData(NodeP root, int data)
{
	while (root != NULL)
	{
		if (root->data == data) return true;
		else if (data < root->data) root = root->left;
		else root = root->right;
	}

	return false;
}
