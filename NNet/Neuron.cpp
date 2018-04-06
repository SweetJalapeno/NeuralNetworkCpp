#include "Neuron.h"
#include <math.h>


Neuron::Neuron(double value){
	mValue = value;
	normalizeValue();
	diffValue();
}


double Neuron::getValue(){
	return mValue;
}


double Neuron::getNormalizedValue(){
	return mNormalizedValue;
}


double Neuron::getDiffValue(){
	return mDiffValue;
}


void Neuron::normalizeValue(){
	// Cheap sigmoid: f(x) = 1 / ( 1 + |x| )
	mNormalizedValue = mValue / (1 + abs(mValue));
}


void Neuron::diffValue(){
	mDiffValue = mNormalizedValue / (1 + mNormalizedValue);
}