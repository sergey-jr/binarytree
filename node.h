#pragma once
class node
{
	int info;
	node *left;
	node *right;
public:
	node();
	node(int);
	void get_info(node*&,int);
	int rand_root();
	void add_node(int, node *&);
	void del(node *&);
	~node();
};

