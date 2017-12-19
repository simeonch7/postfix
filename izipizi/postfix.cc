#include <iostream>
#include "calculator.hh"
#include "negate.hh"
#include "power.hh"
#include "plus.hh"
#include "minus.hh"
#include "multiply.hh"
#include "divide.hh"
using namespace std;

int main() {
	Calculator calculator;
	calculator.add_operation(new Negate(calculator));
	calculator.add_operation(new Power(calculator));
	calculator.add_operation(new Plus(calculator));
	calculator.add_operation(new Minus(calculator));
	calculator.add_operation(new Multiply(calculator));
	calculator.add_operation(new Divide(calculator));
	calculator.run(cin, cout);
}
