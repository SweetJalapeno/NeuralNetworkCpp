#pragma once
class Neuron
{
public:
	Neuron();
	Neuron(double val);

	void activate();
	void derivate();
	double getVal() { return this->val; }
	double getActivatedVal() { return this->activatedVal; }
	double getDerivatedVal() { return this->derivatedVal; }
private:
	double val;
	double activatedVal;
	double derivatedVal;
};

