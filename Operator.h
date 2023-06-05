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

	//flipped so sorting works ((- < *) == false)
	bool operator < (const Operator& _operator);

	//flipped so sorting works ((- < *) == true)
	bool operator > (const Operator& _operator);
};