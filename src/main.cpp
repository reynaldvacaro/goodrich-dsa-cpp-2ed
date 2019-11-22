/*
 * sample.cpp
 *
 *  Created on: 16 Oct 2019
 *      Author: Collabera
 */
#include <cstdlib>
#include <iostream>

#include "CreditCard.h"
#include "SLinkedList.h"
#include "SLinkedList.cpp"
#include "SNode.h"
#include "ArrayStack.h"
#include "ArrayStack.cpp"
#include <vector>
#include <string>
using namespace std;

// from code fragment 3.20
void testSLinkedList() {
	SLinkedList<int>  sLInt;
	sLInt.addFront(1);
	sLInt.addFront(2);
	sLInt.addFront(3);
	sLInt.addFront(4);
	sLInt.addFront(5);
	sLInt.addFront(6);

	while(!sLInt.empty()) {
		cout << sLInt.front() << " ";
		sLInt.removeFront();
	}
}

void testArrayStack() {
	ArrayStack<int> A;
	A.push(7);
	A.push(13);
	cout << A.top() << endl; A.pop();
	A.push(9);
	cout << A.top() << endl;A.pop();
	ArrayStack<string> B(10);
	B.push("Bob");
	B.push("Alice");
	cout << B.top() << endl; B.pop();
	B.push("Eve");

}

// from TestCard.cpp chapter 1.4
void testCard() {
	vector<CreditCard*> wallet(10);

	wallet[0] = new CreditCard("1234 1234 1234 1234","John Bowman",2500);
	wallet[1] = new CreditCard("2345 2345 2345 2345","John Bowman", 3500);
	wallet[2] = new CreditCard("3456 3456 3456 3456","John Bowman", 5000);

	for(int j = 1; j <= 16; j++) {
		wallet[0]->chargeIt(double(j));
		wallet[1]->chargeIt(2 * j);
		wallet[2]->chargeIt(double(3*j));
	}

	cout << "Card payments: \n";

	for(int i= 0; i < 3; i ++) {
		cout << *wallet[i];

		while(wallet[i]->getBalance() > 100.00) {
			wallet[i]->makePayment(100);
			cout << "New balance = " << wallet[i]->getBalance() << "\n";
		}

		cout << "\n";
		delete wallet[i];
	}
}

long long pow(long long x, int n) {

	if(n == 1) return x;
	if(n % 2 == 0)
		return pow(x * x, n/2);
	else
		return x * pow(x * x, (n - 1)/ 2);

}

int main() {
	testArrayStack();
	//testCard();
	//testSLinkedList();

//	int ** A = a;
	//printArray(A, 3,5);

	//cout << "binaryPow(2): " << pow(2,60);

	return EXIT_SUCCESS;
}



