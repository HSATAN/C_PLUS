#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
//vector<string> split(string name, string delim)
//{
//	vector<string> elems;
//	int pos = 0;
//	int end_index = 0;
//	string temp;
//	if (name.empty())
//		return elems;
//	while (pos >= 0)
//	{
//		pos = (int)name.find(" ", end_index);
//		if (pos < 0)
//			break;
//		temp = name.substr(end_index, pos - end_index);
//		cout << temp << endl;
//		end_index = pos + 1;
//		elems.push_back(temp);
//	}
//	if (end_index != 0 && end_index < name.length())
//	{
//		cout << name.substr(end_index) << endl;
//		elems.push_back(temp);
//	}
//	return elems;
//}