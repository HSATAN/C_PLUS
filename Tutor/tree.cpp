#include "stdafx.h"
#include<iostream>
#include<fstream>
#include"tree.h"
#include<string>
#include"split.h"
using namespace std;
BTree init_tree(DATATYPE data, BTree tree)
{
	if (tree)
	{
		return tree;
	}
	tree = (BTree)malloc(sizeof(Node));
	tree->left = NULL;
	tree->left = NULL;
	tree->data = data;
	return tree;
}
void add_node(DATATYPE data, BTree tree)
{
	BTree node =(BTree)malloc(sizeof(Node));
}
BTree create_tree_from_file(BTree tree,string filename)
{

	ifstream in;
	in.open("test.txt");
	string line;
	vector<string> elems;
	string data;
	while (getline(in, line))
	{
		elems = split(line, " ");
		while (!elems.empty())
		{
			data = elems.back();
			elems.pop_back();
			cout << data << endl;
			printf("%s\n",data.c_str());
		}
		cout << line << endl;
	}
	return tree;
}