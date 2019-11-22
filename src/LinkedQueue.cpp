/*
 * LinkedQueue.cpp
 *
 *  Created on: 19 Nov 2019
 *      Author: Collabera
 */

#include "LinkedQueue.h"
#include "CircleList.h"
#include "QueueEmpty.h"

template<typename E> LinkedQueue<E>::LinkedQueue():  n(0)  {
	c = new CircleList<E>();
}

template<typename E> int LinkedQueue<E>::size() const { return n; }
template<typename E> bool LinkedQueue<E>::empty() const { return n == 0; }
template<typename E> const E& LinkedQueue<E>::front() const throw(QueueEmpty) {
	if(empty())
		throw QueueEmpty("front of empty queue");

	return c->front();
}

template<typename E> void LinkedQueue<E>::enqueue(const E& e) {
	c->add(e);
	c->advance();
	n++;
}
template<typename E> void LinkedQueue<E>::dequeue() throw(QueueEmpty) {
	if(empty())
		throw QueueEmpty("dequeue of empty queue");
	c->remove();
	n --;
}

