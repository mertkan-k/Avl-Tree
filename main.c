#include <stdio.h>
#include "avl_tree.h"

int main(){
	NodeP n = CreateTreeWithData(10);
	AddData(n, 20);
	AddData(n, 5);
	AddData(n, 3);
	AddData(n, 25);

	bool f1 = FindData(n, 4);
	bool f2 = FindData(n, 3);

	return 0;
}