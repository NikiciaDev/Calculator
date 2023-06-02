#include "ConsoleUtil.h"

namespace cu {
	void print(const std::string& string) {
		std::cout << string << "\n";
	}

	void receive(std::string& string) {
		std::cin >> string;
	}

	void getEquation(std::string& equation) {
		cu::print("Please enter the equation you would like to have solved!");
		cu::receive(equation);
		cu::print("Verifying validity of equation...");
	}

	void abort(const std::string& message, const int& exitCode) {
		cu::print(message);
		cu::print("Exiting with code " + exitCode);
		exit(exitCode);
	}
}