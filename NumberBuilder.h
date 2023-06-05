#pragma once
#include <string>
#include "Number.h"

//lets you build a number instance using a string
class NumberBuilder {
private:
	Number numberObject;

public:
	std::string number;

	NumberBuilder();

	Number buildNumber(short position);

	void clear();
};