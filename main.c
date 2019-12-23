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
	/**
	 *        10
	 *    5       20
	 *  3   6   12  25
	*/

	bool f1 = FindData(n, 4);
	bool f2 = FindData(n, 3);

	RefreshHeight(n);

	return 0;
}