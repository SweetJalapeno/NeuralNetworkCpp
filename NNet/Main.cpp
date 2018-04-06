#include <iostream>

#include "Neuron.h"


int main(int argc, char **argv){
	Neuron *n = new Neuron(0.9);
	std::cout << "Value: " << n->getVal() << std::endl;
	std::cout << "Activated value: " << n->getActivatedVal() << std::endl;
	std::cout << "Derivated value: " << n->getDerivatedVal() << std::endl;
	return 0;
}