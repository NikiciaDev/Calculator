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
}