#include "Node.h"

Node::Node()
{
	value = 0;
}
void Node::setName(string N)
{
	name = N;
}
void Node::setValue(short v)
{
	value = v;
}
string Node::getName()
{
	return name;
}
short Node::getValue()
{
	return value;
}
void Node::printNode()
{
	cout << name << " = " << value << endl;
}