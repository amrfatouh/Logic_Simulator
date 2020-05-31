#include "XORGate.h"

void XORGate::calcOut()
{
	if ((in1->getValue() == 0 && in2->getValue() == 0)
		|| (in1->getValue == 1 && in2->getValue == 1))
		out1->setValue(0);
	else
		out1->setValue(1);
}