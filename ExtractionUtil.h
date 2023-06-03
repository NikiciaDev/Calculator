#pragma once
#include <vector>
#include <string>
#include "Number.h"
#include "Operator.h"

namespace eu {
	//extracts numbers and operators from the given equation and fills them into the given vectors
	void extractNumbersAndOperators(const std::string& equation, std::vector<Number>& numbers, std::vector<Operator>& operators);
}