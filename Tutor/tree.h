#pragma once
typedef int DATATYPE;
using namespace std;
typedef struct Tree
{
	struct Tree * left;
	struct Tree * right;
	DATATYPE data;
}Node, *BTree;
BTree init_tree(DATATYPE, BTree);
void add_node(DATATYPE, BTree);
BTree create_tree_from_file(BTree,string);
