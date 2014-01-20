/*
 * Put.cpp
 *
 *  Created on: Jan 14, 2014
 *      Author: john
 */

#include "Put.h"

Put::Put(double initial_price, double strike, double end_price,
			double new_premium, unsigned int num_shares) {
	initialPrice = initial_price;
	strikePrice = strike;
	endPrice = end_price;
	premium = new_premium;
	shares = num_shares;
}

Put::~Put() {
	// TODO Auto-generated destructor stub
}

double Put::calculateBuy() {
	double profit;
	if (endPrice > strikePrice) {
		profit = -premium;
	} else {
		profit = shares * (strikePrice - endPrice) - premium;
	}
	return profit;
}

double Put::calculateSell() {
	double profit;
	if (endPrice > strikePrice) {
		profit = premium;
	} else {
		profit = shares * (endPrice - strikePrice) + premium;
	}
	return profit;
}
