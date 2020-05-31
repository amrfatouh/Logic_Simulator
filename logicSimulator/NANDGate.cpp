#include "NANDGate.h"

void NANDGate::calcOut()
{
	out1->setValue(!(in1->getValue() && in2->getValue()));
}