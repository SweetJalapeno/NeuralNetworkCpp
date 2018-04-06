#include "Neuron.h"
#include <math.h>


Neuron::Neuron(){
	val = 0;
}

Neuron::Neuron(double val)
{
	this->val = val;
	activate();
	derivate();
}

void Neuron::activate(){
	activatedVal = val / (1 + abs(val));
}

void Neuron::derivate(){
	derivatedVal = activatedVal*(1 - activatedVal);
}
