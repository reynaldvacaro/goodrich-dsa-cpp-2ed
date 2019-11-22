/*
 * LinkedQueue.h
 *
 *  Created on: 19 Nov 2019
 *      Author: Collabera
 */

#ifndef SRC_LINKEDQUEUE_H_
#define SRC_LINKEDQUEUE_H_

#include "QueueEmpty.h"
#include "CircleList.h"
#include "CircleList.cpp"

template<typename E> class CircleList;

template<typename E>
class LinkedQueue {
public:
	LinkedQueue();
	int size() const;
	bool empty() const;
	const E& front() const throw(QueueEmpty);
	void enqueue(const E& e);
	void dequeue() throw(QueueEmpty);
private:
	CircleList<E> *  c;
	int n;
};

#endif /* SRC_LINKEDQUEUE_H_ */
