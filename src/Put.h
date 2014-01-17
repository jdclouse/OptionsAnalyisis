/*
 * Put.h
 *
 *  Created on: Jan 14, 2014
 *      Author: john
 */

#ifndef PUT_H_
#define PUT_H_

class Put {
public:
	Put(double initial_price, double strike, double end_price,
			double new_premium, unsigned int num_shares);
	virtual ~Put();
	double calculateBuy();
	double calculateSell();

private:
	double initialPrice;
	double strikePrice;
	double endPrice;
	double premium;
	unsigned int shares;
};

#endif /* PUT_H_ */
