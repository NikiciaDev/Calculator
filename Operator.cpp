#include "Operator.h"

Operator::Operator() {
	sign = -1;
	preference = -1;
}

Operator::Operator(char sign, short preference) : sign(sign), preference(preference) {}

bool Operator::isValid(char sign) {
	return sign == '+' || sign == '-' || sign == '*' || sign == '/' || sign == '^';
}