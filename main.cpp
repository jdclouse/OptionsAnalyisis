/*
 * main.cpp
 *
 *  Created on: Jan 19, 2014
 *      Author: john
 */

#include "src/Put.h"
#include <iostream>

int main() {
	Put test_put(55, 50, 40, 500, 100);
	std::cout << test_put.calculateBuy() << std::endl;
	std::cout << test_put.calculateSell() << std::endl;
	Put test_put2(31, 30, 00, 1, 1);
	std::cout << "Selling:" << std::endl;
	for (unsigned int ii = 24; ii < 33; ++ii) {
		test_put2.setEndPrice(ii);
		std::cout << ii << ": " << test_put2.calculateSell() << std::endl;
	}
	std::cout << "Buying:" << std::endl;
	for (unsigned int ii = 24; ii < 33; ++ii) {
		test_put2.setEndPrice(ii);
		std::cout << ii << ": " << test_put2.calculateBuy() << std::endl;
	}
	return 0;
}


