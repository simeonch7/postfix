#ifndef MULTIPLY_HH_
#define MULTIPLY_HH_

#include "binary.hh"
#include "calculator.hh"

class Multiply : public BinaryOperation {
protected:
	double execute(double arg1, double arg2) const;
public:
	Multiply(Calculator& calculator)
		: BinaryOperation(calculator, "*") {}

};

#endif
