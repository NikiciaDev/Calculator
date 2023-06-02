#include "Number.h"

Number::Number() {
	value = -1;
	position = -1;
}

Number::Number(long double value, short position) : value(value), position(position) {}