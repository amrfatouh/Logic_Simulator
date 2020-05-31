#include <iostream>
using namespace std;
#pragma once

class Node
{
	string name;
	short value;
public:
	Node();
	void setName(string N);
	void setValue(short v);
	string getName();
	short getValue();
	void printNode();
};