#ifndef DIVIDE_HH_
#define DIVIDE_HH_

#include "binary.hh"
#include "calculator.hh"

class Divide : public BinaryOperation {
protected:
	double execute(double arg1, double arg2) const;
public:
	Divide(Calculator& calculator)
		: BinaryOperation(calculator, "/") {}

};

#endif
