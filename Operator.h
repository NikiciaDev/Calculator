#pragma once

class Operator {
public:
	char sign;
	short preference;

	Operator();
	Operator(char sign, short preference);

	static bool isValid(char sign);
};