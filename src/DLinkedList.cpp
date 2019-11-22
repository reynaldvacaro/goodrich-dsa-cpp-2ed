/*
 * DLinkedList.cpp
 *
 *  Created on: 24 Oct 2019
 *      Author: Collabera
 */

#include "DLinkedList.h"
#include "DNode.h"
#include <cstddef>

template<typename E> DLinkedList<E>::DLinkedList() {
	header = new DNode<E>();
	trailer = new DNode<E>();

	header->next = trailer;
	trailer->prev = header;
}

template<typename E> DLinkedList<E>::~DLinkedList() {
	while(!empty()) removeFront();
	delete header;
	delete trailer;
}

template<typename E> bool DLinkedList<E>::empty() const {
	return (header->next == trailer);
}

template<typename E> const E& DLinkedList<E>::front() const {
	return header->prev->element;
}

template<typename E> const E& DLinkedList<E>::back() const {
	return trailer->prev->element;
}

template<typename E> void DLinkedList<E>::add(DNode<E> * v, const E& e) {
	DNode<E> * u = new DNode<E>();
	u->element = e;
	u->next = v;
	u->prev = v->prev;
	v->prev->next = v->prev = u;
}

template<typename E> void DLinkedList<E>::addFront(const E& e) {
	add(header->next,e);
}
template<typename E> void DLinkedList<E>::addBack(const E& e) {
	add(trailer, e);
}

template<typename E> void DLinkedList<E>::remove(DNode<E> * v) {
	DNode<E> * u = v->prev;
	DNode<E> * w = v->next;
	u->next = w;
	w->prev = u;
	delete v;

}

template<typename E> void DLinkedList<E>::removeFront() {
	remove(header->next);
}
template<typename E> void DLinkedList<E>::removeBack() {
	remove(trailer->prev);
}
