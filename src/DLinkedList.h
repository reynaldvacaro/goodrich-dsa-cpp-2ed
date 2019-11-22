/*
 * DLinkedList.h
 *
 *  Created on: 24 Oct 2019
 *      Author: Collabera
 */

#ifndef SRC_DLINKEDLIST_H_
#define SRC_DLINKEDLIST_H_

#include "DNode.h"

template<typename E> class DNode;

template<typename E>
class DLinkedList {
public:
	DLinkedList();
	~DLinkedList();
	bool empty() const;
	const E& front() const;
	const E& back() const;
	void addFront(const E& e);
	void addBack(const E& e);
	void removeFront();
	void removeBack();
private:
	DNode<E> * header;
	DNode<E> * trailer;
protected:
	void add(DNode<E> * n,const E& e);
	void remove(DNode<E> * n);
};


#endif /* SRC_DLINKEDLIST_H_ */
