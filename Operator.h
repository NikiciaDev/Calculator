#pragma once

class Operator {
public:
	char sign;
	short preference;
	short position;

	Operator();
	Operator(char sign, short preference, short position);

	static bool isValid(char sign);

	static short evaluatePreference(char sign);
};