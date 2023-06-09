#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include "Number.h"
#include "Operator.h"
#include "ConsoleUtil.h"

namespace mu {
	//returns 0 if the equation is not valid, returns non 0 when equation is valid
	bool verifyEquationValidity(std::string& equation);

	//solves the given equation if provided in a number vector and an operator vector
	Number solve(std::vector<Number>& numbers, std::vector<Operator>& operators);

	//helper function for solve()
	short findNextNonUsedDown(std::vector<Number>& numbers, short position);

	//helper function for solve()
	short findNextNonUsedUp(std::vector<Number>& numbers, short position);
}