#include "stdafx.h"
#include "node.h"
#include <iostream>


node::node()
{
	left = NULL;
	right = NULL;
	info = 0;
}

node::node(int inf)
{
	left = NULL;
	right = NULL;
	info = inf;
}

void node::get_info(node *& obj,int r)
{
	if (obj == NULL) return;
	if (obj != NULL) 
	{
		get_info(obj->left,++r);
		for (int i = 0; i<r; ++i) std::cout << "|";
		std::cout<< obj->info<<"\n"; 
		r--;
	}
	get_info(obj->right, ++r);
}

int node::rand_root()
{
	return rand()%2;
}

void node::add_node(int inf, node *& obj)
{
	if (NULL == obj) 
	{
		obj = new node; 
		obj->info = inf; 
		obj->left = obj->right = NULL;
	}
	if (inf<obj->info)   
	{
		if (obj->left != NULL) add_node(inf, obj->left);
		else
		{
			obj->left = new node;
			obj->left->left = obj->left->right = NULL;
			obj->left->info = inf; 
		}
	}

	if (inf>obj->info)
	{
		if (obj->right != NULL) add_node(inf, obj->right);
		else 
		{
			obj->right = new node;  
			obj->right->left = obj->right->right = NULL; 
			obj->right->info = inf;
		}
	}
	if (inf == obj->info)
	{
		if (obj->left != NULL) add_node(inf, obj->left);
		else
		{
			obj->left = new node;
			obj->left->left = obj->left->right = NULL;
			obj->left->info = inf;
		}
	}
}

void node::del(node *& obj)
{
	if (obj != NULL) 
	{
		del(obj->left); 
		del(obj->right); 
		delete obj; 
		obj = NULL; 
	}
}


node::~node()
{
}
