#include "MathUtil.h"

namespace mu {
	bool verifyEquationValidity(std::string& equation) {
		bool inNumber = std::isdigit(*equation.begin()) || *equation.begin() == '-';
		bool hadDot = false, wasLastDot = false, expectingDigit = false;

		if (!std::isdigit(*(equation.end() - 1))) return false;

		for (char c : equation) {
			if (c == '.' && !inNumber) return false;

			if (std::isdigit(c)) {
				wasLastDot = false;
				inNumber = true;
				expectingDigit = false;
				continue;
			} else if(!expectingDigit){
				if (c == '.') {
					wasLastDot = true;
					if (!hadDot) {
						hadDot = true;
						continue;
					}
				} else if (Operator::isValid(c) && inNumber) {
					inNumber = false;
					wasLastDot = false;
					hadDot = false;
					continue;
				}
				if (c == '-') {
					expectingDigit = true;
					inNumber = false;
					continue;
				}
			}

			return false;
		}

		return true;
	}

	Number solve(std::vector<Number>& numbers, std::vector<Operator>& operators) {
		Number result;
		std::sort(operators.begin(), operators.end());



		return result;
	}
}