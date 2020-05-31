#pragma once
#include <vector>
#include "Node.h"
#include "ANDGate.h"
#include "ORGate.h"
#include "XORGate.h"
#include "NOTGate.h"
#include "NANDGate.h"
#include "NORGate.h"
#include "XNORGate.h"
#include <fstream>
#include <iostream>
using namespace std;

class Simulator
{
	vector<Gate*> GA;
	vector<Node*> NA;
public:
	int getGSize();
	int getNSize();
	Node* findNode(string s);
	Node* addNode(string s);
	Node* findOrAdd(string s);
	Gate* addGate(string type);
	void sim();
	void printAllNodes();
	void load(const char* fileName);
};

