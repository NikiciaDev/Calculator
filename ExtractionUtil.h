#pragma once
#include <vector>
#include <string>
#include "Number.h"
#include "Operator.h"

namespace eu {
	//extracts numbers from the given equation and returns them in a pointer to a vector
	std::vector<Number>* extractNumbers(const std::string& equation);

	//extracts operators from the given equation and returns them in a pointer to a vector
	std::vector<Operator>* extractOperators(const std::string& equation);
}