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
		std::sort(operators.begin(), operators.end());

		for (Operator o : operators) {
			short nextDown = findNextNonUsedDown(numbers, o.position), nextUp = findNextNonUsedUp(numbers, o.position + 1);

			std::cout << nextDown << " | " << nextUp << "\n";

			Number n = o.operate(numbers[nextDown], numbers[nextUp]);
			numbers[nextDown] = n;
			numbers[nextUp].used = true;
		}

		return numbers[0];
	}

	short findNextNonUsedDown(std::vector<Number>& numbers, short position) {
		for (position; position >= 0; position--) {
			if (!numbers[position].used) return position;
		}
		return -1;
	}

	short findNextNonUsedUp(std::vector<Number>& numbers, short position) {
		for (position; position < numbers.size(); position++) {
			if (!numbers[position].used) return position;
		}
		return -1;
	}
}