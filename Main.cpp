#include <iostream>
#include <vector>
#include "MathUtil.h"
#include "ConsoleUtil.h"
#include "ExtractionUtil.h"
#include "Number.h"
#include "Operator.h"

std::string equation;
std::vector<Number>* numbers = new std::vector<Number>;
std::vector<Operator>* operators = new std::vector<Operator>;
Number result;

int main(int argc, int* argv[]) {
	while (true) {
		cu::getEquation(equation);
		if (equation == "exit") break;

		//erase all spaces from string
		equation.erase(std::remove_if(equation.begin(), equation.end(), isspace), equation.end());

		cu::print("Verifying validity of equation...");
		if (!mu::verifyEquationValidity(equation)) {
			cu::abort("Equation seems to be invalid! Aborting!", -1);
		}

		cu::print("Extracting numbers and Operators from equation!");
		eu::extractNumbersAndOperators(equation, *numbers, *operators);
		cu::print("Finnished! Solving Equation...");
		result = mu::solve(*numbers, *operators);
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