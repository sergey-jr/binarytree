// binarytree.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include "node.h"

using namespace std;


int main()
{
	node *obj = NULL;  
	int n,k;
	cout << "enter num of elements: ";
	cin >> k;
	for (int i = k; i > 0; i--)
	{
		cout << "enter num: ";
		cin >> n;
		obj->add_node(n, obj);
	}
	cout << "binary tree:\n";
	obj->get_info(obj,0); 
	cout << '\n';
	obj->del(obj);
	system("pause");
    return 0;
}

