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

void AddData(NodeP root, int data)
{
	NodeP* p = &root;

	while (*p != NULL)
	{
		if ((*p)->data == data) return;
		else if (data < (*p)->data) p = &((*p)->left);
		else p = &((*p)->right);
	}

	*p = CreateTreeWithData(data);

	RefreshHeight(root);
}

bool FindData(NodeP root, int data)
{
	NodeP* p = &root;

	while (*p != NULL)
	{
		if ((*p)->data == data) return true;
		else if (data < (*p)->data) p = &((*p)->left);
		else p = &((*p)->right);
	}

	return false;
}

int RefreshHeight(NodeP root)
{
	if (root == NULL) return 0;

	int lMax = RefreshHeight(root->left)+1;
	int rMax = RefreshHeight(root->right)+1;

	if (lMax >= rMax) return (root->height = lMax);
	else return (root->height = rMax);
}