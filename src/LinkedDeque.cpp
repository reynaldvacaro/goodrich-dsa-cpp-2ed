/*
 * LinkedDeque.cpp
 *
 *  Created on: 19 Nov 2019
 *      Author: Collabera
 */

#include "LinkedDeque.h"
#include "DequeEmpty.h"

template<typename E> LinkedDeque<E>::LinkedDeque() {
	// TODO Auto-generated constructor stub
	d = new DLinkedList<E>();
	n = 0;
}

template<typename E> void LinkedDeque<E>::insertFront(const E& e) {
	d->addFront(e);
	n++;
}

template<typename E> void LinkedDeque<E>::insertBack(const E& e) {
	d->addBack(e);
	n++;
}

template<typename E> void LinkedDeque<E>::removeFront() throw(DequeEmpty) {
	if(empty())
		throw DequeEmpty("removeBack of empty deque");
	d->removeBack();
	n --;
}

template<typename E> void LinkedDeque<E>::removeBack() throw(DequeEmpty) {
	if(empty())
		throw DequeEmpty("removeBack of empty deque");

	d->removeBack();
	n --;
}



