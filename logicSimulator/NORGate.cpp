#include "NORGate.h"

void NORGate::calcOut()
{
	out1->setValue(!(in1->getValue() || in2->getValue()));
}