/*
 * CreditCard.cpp
 *
 *  Created on: 17 Oct 2019
 *      Author: Collabera
 */

#include "CreditCard.h"

using namespace std;

CreditCard::CreditCard(const string& number, const string& name,
			int limit, double balance) {
	this->number = number;
	this->name = name;
	this->balance = balance;
	this->limit = limit;
}


bool CreditCard::chargeIt(double price) {
	if((price + balance) > limit)
		return false;

	balance += price;

	return true;

}

void CreditCard::makePayment(double payment) {
	balance -= payment;
}

CreditCard::~CreditCard() {
	// TODO Auto-generated destructor stub
}

ostream& operator <<(ostream& out, const CreditCard& c) {
	out << "Number = " << c.getNumber() << "\n"
		<< "Name = " << c.getName() << "\n"
		<< "Balance = " << c.getBalance() << "\n"
		<< "Limit = " << c.getLimit() << "\n";

	return out;
}
