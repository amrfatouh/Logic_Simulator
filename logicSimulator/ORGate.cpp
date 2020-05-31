#include "ORGate.h"

void ORGate::calcOut()
{
	out1->setValue(in1->getValue() || in2->getValue());
}