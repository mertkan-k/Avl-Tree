#include <stdio.h>
#include "avl_tree.h"

int main(){
	NodeP n = CreateTreeWithData(10);
	AddData(n, 20);
	AddData(n, 5);
	AddData(n, 3);
	AddData(n, 25);
	AddData(n, 6);
	AddData(n, 12);
	AddData(n, 23);
	AddData(n, 26);
	/**
	 *        10
	 *    5       20
	 *  3   6   12  25
	 *             23 26
	*/

	bool f1 = FindData(n, 4);
	bool f2 = FindData(n, 3);
	bool f3 = FindData(n, 23);

	ClearTree(n);

	return 0;
}