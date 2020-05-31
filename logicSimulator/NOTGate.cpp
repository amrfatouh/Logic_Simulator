#include "NOTGate.h"

void NOTGate::calcOut()
{
	out1->setValue(!(in1->getValue()));
}