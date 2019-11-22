/*
 * SLinkedList.cpp
 *
 *  Created on: 18 Oct 2019
 *      Author: Collabera
 */

#include "SNode.h"
#include "SLinkedList.h"
#include <cstddef>


template<typename E>
SLinkedList<E>::SLinkedList(){
	head = NULL;
}

template<typename E>
bool SLinkedList<E>::empty() const {
	return head == NULL;
}

template<typename E>
const E& SLinkedList<E>::front() const {
	return head->element;
}

template <typename E>
SLinkedList<E>::~SLinkedList() {
	while(!empty()) removeFront();
}

template<typename E>
void SLinkedList<E>::addFront(const E& element) {
	SNode<E> * v = new SNode<E>;
	v->element = element;
	v->next = head;
	this->head = v;
}

template <typename E>
void SLinkedList<E>::removeFront(){
	SNode<E> * old = this->head;
	this->head = old->next;
	delete old;
}



