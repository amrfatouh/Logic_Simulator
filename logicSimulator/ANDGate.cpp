#include "ANDGate.h"

void ANDGate::calcOut()
{
	out1->setValue(in1->getValue() && in2->getValue());
}