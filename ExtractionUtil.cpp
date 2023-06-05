#include "ExtractionUtil.h"

namespace eu {
	void extractNumbersAndOperators(const std::string& equation, std::vector<Number>& numbers, std::vector<Operator>& operators) {
		short posInNum = 0, posInOp = 0;
		NumberBuilder numberBuilder;

		for (short s = 0; s <= equation.size(); s++) {
			const char c = equation[s];

			if (s == equation.size() + 1 || (!std::isdigit(c) && c != '.' && !numberBuilder.number.empty())) {
				cu::devPrint("pushed: " + numberBuilder.number + " into number vector at position " + std::to_string(posInNum));
				numbers.push_back(numberBuilder.buildNumber(posInNum));
				numberBuilder.clear();
				if (s < equation.size()) {
					//stooooopid but wont work otherwise and im lazy
					std::string s = "pushed "; s += c; s += " into operator vector at position " + std::to_string(posInOp);
					cu::devPrint(s);
					operators.push_back(Operator(c, Operator::evaluatePreference(c), posInOp));
					posInOp++;
				}

				posInNum++;
				continue;
			}

			cu::devPrint("appended: " + std::to_string(c - '0') + " onto number " + std::to_string(posInNum));
			numberBuilder.number += c;
		}
	}
}