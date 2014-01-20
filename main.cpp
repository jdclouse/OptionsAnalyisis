/*
 * main.cpp
 *
 *  Created on: Jan 19, 2014
 *      Author: john
 */

#include "src/Put.h"
#include "src/Call.h"
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
	Put condor_buy_put(45, 35, 35, 50, 100);
	Put condor_sell_put(45, 40, 35, 100, 100);
	Call condor_buy_call(45, 55, 35, 50, 100);
	Call condor_sell_call(45, 50, 35, 100, 100);
	std::cout << "IC low end:" << std::endl;
	for (unsigned int ii = 30; ii < 60; ++ii) {
		condor_buy_put.setEndPrice(ii);
		condor_sell_put.setEndPrice(ii);
		condor_buy_call.setEndPrice(ii);
		condor_sell_call.setEndPrice(ii);
		double long_put = condor_buy_put.calculateBuy();
		double short_put = condor_sell_put.calculateSell();
		double long_call = condor_buy_call.calculateBuy();
		double short_call = condor_sell_call.calculateSell();
		std::cout << ii << ": " << long_put << ", " << short_put << ", " << long_call << ", " << short_call << ", " << long_put + short_put + long_call + short_call << std::endl;
	}
	return 0;
}


