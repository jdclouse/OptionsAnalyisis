/*
 * Call.cpp
 *
 *  Created on: Jan 19, 2014
 *      Author: john
 */

#include "Call.h"

Call::Call(double initial_price, double strike, double end_price,
		double new_premium, unsigned int num_shares) {
	initialPrice = initial_price;
	strikePrice = strike;
	endPrice = end_price;
	premium = new_premium;
	shares = num_shares;
}

Call::~Call() {
	// TODO Auto-generated destructor stub
}

double Call::calculateBuy() {
	double profit;
	if (endPrice < strikePrice) {
		profit = -premium;
	} else {
		profit = shares * (endPrice - strikePrice) - premium;
	}
	return profit;
}

double Call::calculateSell() {
	double profit;
	if (endPrice < strikePrice) {
		profit = premium;
	} else {
		profit = shares * (strikePrice - endPrice) + premium;
	}
	return profit;
}
