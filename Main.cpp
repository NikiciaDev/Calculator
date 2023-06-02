#include <iostream>
#include <vector>
#include "MathUtil.h"
#include "ConsoleUtil.h"
#include "ExtractionUtil.h"
#include "Number.h"
#include "Operator.h"

std::string equation;
std::vector<Number>* numbers;
std::vector<Operator>* operators;

int main(int argc, int* argv[]) {
	while (true) {
		cu::getEquation(equation);
		if (!mu::verifyEquationValidity(equation)) {
			cu::abort("Equation seems to be invalid! Aborting!", -1);
		}
		cu::print("Extracting numbers from equation!");
		numbers = eu::extractNumbers(equation);
		cu::print("Extracting operators from equation!");
		operators = eu::extractOperators(equation);
		cu::print("Finnished! Solving Equation...");
		Number result = mu::solve(*numbers, *operators);
		cu::print("Finnished!");
		cu::print(equation + " = " + std::to_string(result.value));

		equation.clear();
		numbers->clear();
		operators->clear();
	}
	
	delete numbers;
	delete operators;

	return 0;
}