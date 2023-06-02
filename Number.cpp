#include "Number.h"

Number::Number() {
	value = -1;
	isDecimal = false;
}

Number::Number(long double value, bool isDecimal) : value(value), isDecimal(isDecimal) {}