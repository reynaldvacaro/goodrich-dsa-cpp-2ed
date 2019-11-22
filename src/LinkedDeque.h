/*
 * LinkedDeque.h
 *
 *  Created on: 19 Nov 2019
 *      Author: Collabera
 */

#ifndef SRC_LINKEDDEQUE_H_
#define SRC_LINKEDDEQUE_H_

#include "DequeEmpty.h"
#include "DLinkedList.h"

template<typename E>
class LinkedDeque {
public:
	LinkedDeque();
	int size() const;
	bool empty() const;
	const E& front() const throw(DequeEmpty);
	const E& back() const throw(DequeEmpty);
	void insertFront(const E& e);
	void insertBack(const E& e);
	void removeFront() throw(DequeEmpty);
	void removeBack() throw(DequeEmpty);
private:
	DLinkedList<E> * d;
	int n;
};

#endif /* SRC_LINKEDDEQUE_H_ */
