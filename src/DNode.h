/*
 * DNode.h
 *
 *  Created on: 24 Oct 2019
 *      Author: Collabera
 */

#ifndef SRC_DNODE_H_
#define SRC_DNODE_H_

#include "DLinkedList.h"

template<typename E> class DLinkedList;

template <typename E> class DNode {
private:
	E element;
	DNode<E> * prev;
	DNode<E> * next;
	friend class DLinkedList<E>;

};



#endif /* SRC_DNODE_H_ */
