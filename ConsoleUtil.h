#pragma once
#include <iostream>
#include <string>

extern bool displayDeveloperComments;

namespace cu {
	//prints a string to the console
	void print(const std::string& string);

	//prints a string to the console if developer mode is enabled
	void devPrint(const std::string& string);

	//fills a string with a string received by the user
	void receive(std::string& string);

	//fills a string with an equation received by the user
	void getEquation(std::string& equation);

	//prints a message to the console then aborts
	void abort(const std::string& message, const int exitCode);
}