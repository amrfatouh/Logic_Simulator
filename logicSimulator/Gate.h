#include "Node.h"
#pragma once
class Gate
{
protected:
	Node* in1;
	Node* in2;
	Node* out1;
public:
	Gate();
	void setIn1(Node* n);
	void setIn2(Node* n);
	void setOut1(Node* n);
	Node* getIn1();
	Node* getIn2();
	Node* getOut1();
	virtual void calcOut() = 0;
};

