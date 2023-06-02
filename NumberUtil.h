#pragma once
#include <string>
#include "Number.h"

namespace nu {
	long double stringToLongDouble(const std::string& string);

	Number stringToNumber(const std::string& string);
}