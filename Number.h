#pragma once

class Number {
public:
	long double value;
	short position;
	bool used;
		
	Number();
	Number(long double value, short position);
};