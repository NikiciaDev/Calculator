#include "Operator.h"

Operator::Operator() {
	sign = -1;
	preference = -1;
}

Operator::Operator(char sign, short preference, short position) : sign(sign), preference(preference), position(position) {}

bool Operator::isValid(char sign) {
	return sign == '+' || sign == '-' || sign == '*' || sign == '/' || sign == '^';
}