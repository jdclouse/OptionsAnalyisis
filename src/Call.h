/*
 * Call.h
 *
 *  Created on: Jan 19, 2014
 *      Author: john
 */

#ifndef CALL_H_
#define CALL_H_

class Call {
public:
	Call(double initial_price, double strike, double end_price,
			double new_premium, unsigned int num_shares);
	virtual ~Call();

	double calculateBuy();
	double calculateSell();

	void setEndPrice(double endPrice) {
		this->endPrice = endPrice;
	}

private:
	double initialPrice;
	double strikePrice;
	double endPrice;
	double premium;
	unsigned int shares;
};

#endif /* CALL_H_ */
