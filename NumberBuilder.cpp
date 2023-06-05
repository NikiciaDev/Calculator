#include "NumberBuilder.h"

NumberBuilder::NumberBuilder() {}

Number NumberBuilder::buildNumber(short position) {
	return Number(std::stold(this->number), position);
}

void NumberBuilder::clear() {
	this->number.clear();
	this->numberObject.value = -1;
	this->numberObject.position = -1;
}