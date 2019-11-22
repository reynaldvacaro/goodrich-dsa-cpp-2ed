/*
 * SLinkedList.h
 *
 *  Created on: 18 Oct 2019
 *      Author: Collabera
 */

#ifndef SRC_SLINKEDLIST_H_
#define SRC_SLINKEDLIST_H_

#include "SNode.h"

template <typename E>  class SNode;

template <typename E>
class SLinkedList {
public:
	SLinkedList() ;
	~SLinkedList();
	bool empty() const;
	const E& front() const;
	void addFront(const E& e);
	void removeFront();
private:
	SNode<E> * head;
};



#endif /* SRC_SLINKEDLIST_H_ */
