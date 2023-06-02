#include <iostream>
#include <vector>
#include "MathUtil.h"
#include "ConsoleUtil.h"
#include "Number.h"
#include "Operator.h"

std::string equation;
std::vector<Number>* numbers;
std::vector<Operator>* operators;

int main(int argc, int* argv[]) {
	entry:	

	equation.clear();
	numbers->clear();
	operators->clear();

	while (true) {
		cu::getEquation(equation);
		if (!mu::verifyEquationValidity(equation)) {
			cu::print("Failed to validate equation! Aborting!");
			goto entry;
		}
	}
	
	delete numbers;
	delete operators;

	return 0;
}