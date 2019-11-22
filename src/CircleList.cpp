/*
 * CircleList.cpp
 *
 *  Created on: 25 Oct 2019
 *      Author: Collabera
 */

#include "CircleList.h"
#include <cstddef>

template<typename E> CircleList<E>::CircleList(): cursor(NULL) {

}

template<typename E>  CircleList<E>::~CircleList() {
	while(!empty()) remove();
}

template<typename E> bool CircleList<E>::empty() const {
	return cursor == NULL;
}
template<typename E> const E& CircleList<E>::back() const {
	return cursor->element;
}

template<typename E> const E& CircleList<E>::front() const {
	return cursor->next->element;
}

template<typename E>  void CircleList<E>::advance() {
	cursor = cursor->next;
}

template<typename E> void CircleList<E>::add(const E& e) {
	CNode<E> * v = new CNode<E>();
	v->element = e;
	if(cursor == NULL) {
		v->next = NULL;
		cursor = v;
	} else {
		v->next = cursor->next;
		cursor->next = v;
	}
}

template<typename E> void CircleList<E>::remove() {
	CNode<E> * old = cursor->next;

	if(old == cursor)
		cursor = NULL;
	else
		cursor->next = old->next;

	delete old;
}
