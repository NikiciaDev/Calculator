#include "Operator.h"

Operator::Operator() {
	sign = -1;
	preference = -1;
	position = -1;
}

Operator::Operator(char sign, short preference, short position) : sign(sign), preference(preference), position(position) {}

bool Operator::isValid(char sign) {
	return sign == '+' || sign == '-' || sign == '*' || sign == '/' || sign == '^';
}

short Operator::evaluatePreference(char sign) {
	switch (sign) {
	default:
		return -1;
		break;
	case '+':
		return 0;
		break;
	case '-':
		return 0;
		break;
	case '*':
		return 1;
		break;
	case '/':
		return 1;
		break;
	case '^':
		return 2;
		break;
	}
}

bool Operator::operator < (const Operator& _operator) {
	if (this->preference == _operator.preference) return this->position < _operator.position;
	return this->preference > _operator.preference;
}

bool Operator::operator > (const Operator& _operator) {
	if (this->preference == _operator.preference) return this->position > _operator.position;
	return this->preference < _operator.preference;
}
