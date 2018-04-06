#include <iostream>

#include "Neuron.h"


int main(int argc, char **argv){
	Neuron *testNeuron = new Neuron(5.0);

	std::cout << "Value: " << testNeuron->getValue() << std::endl;
	std::cout << "Normalized value: " << testNeuron->getNormalizedValue() << std::endl;
	std::cout << "Derivative at value: " << testNeuron->getDiffValue() << std::endl;

	return 0;
}