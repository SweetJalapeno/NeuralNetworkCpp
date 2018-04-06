#pragma once
class Neuron
{
public:
	Neuron();
	Neuron(double val);

	void normalizeValue();
	void diffValue();
	double getValue();
	double getNormalizedValue();
	double getDiffValue();
private:
	double mValue;
	double mNormalizedValue;
	double mDiffValue;
};

