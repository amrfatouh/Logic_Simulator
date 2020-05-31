#include "Simulator.h"

int Simulator::getGSize()
{
	return GA.size();
}
int Simulator::getNSize()
{
	return NA.size();
}
Node* Simulator::findNode(string s)
{
	for (int i = 0; i < NA.size(); i++)
		if (NA[i]->getName() == s)
			return NA[i];
	return NULL;
}
Node* Simulator::addNode(string s)
{
	Node* p = new Node;
	NA.push_back(p);
	p->setName(s);
	return *(NA.end() - 1); // or NA[NA.size() - 1]
}
Node* Simulator::findOrAdd(string s)
{
	Node* p = findNode(s);
	if (p != NULL)
		return p;
	return addNode(s);
}
Gate* Simulator::addGate(string type)
{
	if (type == "AND")
	{
		Gate* p = new ANDGate;
		GA.push_back(p);
	}
	else if (type == "OR")
	{
		Gate* p = new ORGate;
		GA.push_back(p);
	}
	else if (type == "XOR")
	{
		Gate* p = new XORGate;
		GA.push_back(p);
	}
	else if (type == "NOT")
	{
		Gate* p = new NOTGate;
		GA.push_back(p);
	}
	if (type == "NAND")
	{
		Gate* p = new NANDGate;
		GA.push_back(p);
	}
	if (type == "NOR")
	{
		Gate* p = new NORGate;
		GA.push_back(p);
	}
	if (type == "XNOR")
	{
		Gate* p = new XNORGate;
		GA.push_back(p);
	}
	return GA[GA.size() - 1];
}
void Simulator::sim()
{
	//if the last gate is entered first, you need number of iterations equals to GA.size() to calculate output correctly
	for (int j = 0; j < GA.size(); j++)
		for (int i = 0; i < GA.size(); i++)
			GA[i]->calcOut();
}
void Simulator::printAllNodes()
{
	for (int i = 0; i < NA.size(); i++)
		NA[i]->printNode();
}
void Simulator::load(const char* fileName)
{
	ifstream f1;
	f1.open(fileName);
	while (!f1.eof())
	{
		string s;
		f1 >> s;
		if (s == "SET")
		{
			string n;
			short v;
			f1 >> n >> v;
			findOrAdd(n)->setValue(v);
		}
		else if (s == "SIM")
		{
			sim();
		}
		else if (s == "OUT")
		{
			string N;
			f1 >> N;
			if (N == "ALL")
				printAllNodes();
			else
				findOrAdd(N)->printNode();
		}
		else
		{
			Gate* p = addGate(s);
			string N1, N2, N3;
			f1 >> N1 >> N2 >> N3;
			p->setIn1(findOrAdd(N1));
			p->setIn2(findOrAdd(N2));
			p->setOut1(findOrAdd(N3));
		}
	}
	f1.close();
}