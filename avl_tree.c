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

void AddData(NodeP root, int data)
{
	NodeP* p = Find(root, data);

	if (*p ==NULL)
	{
		*p = CreateTreeWithData(data);

		RefreshHeight(root);
	}
}

NodeP* Find(NodeP root, int data)
{
	NodeP* p = &root;

	while (*p != NULL)
	{
		if ((*p)->data == data) break;
		else if (data < (*p)->data) p = &((*p)->left);
		else p = &((*p)->right);
	}

	return p;
}

bool FindData(NodeP root, int data)
{
	return (*Find(root, data) != NULL);
}

int RefreshHeight(NodeP root)
{
	if (root == NULL) return 0;

	int lMax = RefreshHeight(root->left)+1;
	int rMax = RefreshHeight(root->right)+1;

	if (lMax >= rMax) return (root->height = lMax);
	else return (root->height = rMax);
}

void ClearTree(NodeP root)
{
	if (root->left)
		ClearTree(root->left);
	if (root->right)
		ClearTree(root->right);

	free(root);
}
