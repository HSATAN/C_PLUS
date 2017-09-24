// Tutor.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<ctime>
#include<vector>
#include"tree.h"
#include<string>
#include"split.h"
using namespace std;
double vals[] = { 10.1, 12.6, 33.1, 24.1, 50.0 };

 class Box
{
	int a = 999;
	static Box box;
	Box() {}

public:

	static int b;
	friend void printA(Box box);
	double length;
	double width;
	double height;
	static Box get_instance();

};
Box Box::box = Box();
 Box  Box::get_instance()
{
	return box;

	}

double & getRandom(int i) {

	return vals[i];
}
void printA(Box box)
{
	cout << box.a << endl;
}
template <class T>
class Stack {
private:
	vector<T> elems;
public:
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const
	{
		return elems.empty();
	}
	vector<T> get_stack()
	{
		return elems;
	}
};

template <class T>
void Stack<T>::push(T const& elem)
{
	elems.push_back(elem);
}
template <class T> void Stack<T>::pop() {
	if (elems.empty())
	{
		throw out_of_range("栈为空");

	}
}
template <class T> T Stack<T>::top() const
{
	if (elems.empty())
	{
		throw out_of_range("空栈");
	}
	return elems.back();
}
void create_file()
{
	ofstream out;
	out.open("test.txt");
	out << "黄开杰 熊麟茹" << endl;
	out.close();
}
void out_file()
{
	ifstream in;
	in.open("test.txt");
	string line;
	while (getline(in, line))
	{
		cout << line.length()<< endl;
		cout << line.size() << endl;
		cout << line.substr(0, line.find(' ')) << endl;
	
	}
}


int main()
{
	BTree tree=NULL;
	tree = init_tree(999, tree);
	string name = "黄开杰 熊麟茹 test";
	create_tree_from_file(tree,"");
    return 0;
}

