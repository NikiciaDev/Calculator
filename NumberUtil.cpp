#include "NumberUtil.h"

namespace nu {
	long double stringToLongDouble(const std::string& string) {
		return std::stold(string);
	}

	Number stringToNumber(const std::string& string) {
		return Number(std::stold(string), -1);
	}
}