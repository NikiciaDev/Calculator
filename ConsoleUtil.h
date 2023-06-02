#pragma once

#include <iostream>

namespace cu {
	//prints a string to the console
	void print(const std::string& string);

	//fills a string with a string received by the user
	void receive(std::string& string);

	//fills a string with an equation received by the user
	void getEquation(std::string& equation);
}