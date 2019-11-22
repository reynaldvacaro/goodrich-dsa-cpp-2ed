/*
 * CreditCard.h
 *
 *  Created on: 17 Oct 2019
 *      Author: Collabera
 */

#ifndef SRC_CREDITCARD_H_
#define SRC_CREDITCARD_H_

#include <string>
#include <iostream>

class CreditCard {
public:
	CreditCard(const std::string& number, const std::string& name,
			int limit, double balance=0);
	virtual ~CreditCard();

	std::string getNumber() const { return number;}
	std::string getName() const { return name;}
	double getBalance() const { return balance;}
	int getLimit() const { return limit; }

	bool chargeIt(double price);
	void makePayment(double payment);
private:
	std::string number;
	std::string name;
	int limit;
	double balance;
};
std::ostream& operator<<(std::ostream& out, const CreditCard& c);
#endif /* SRC_CREDITCARD_H_ */
