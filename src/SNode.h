/*
 * Snode.h
 *
 *  Created on: 24 Oct 2019
 *      Author: Collabera
 */

#ifndef SRC_SNODE_H_
#define SRC_SNODE_H_
#include "SLinkedList.h"

template<typename E> class SLinkedList;

template <typename E>
class SNode {

	private:
		E element;
		SNode<E> * next;
		friend class SLinkedList<E>;
};

#endif /* SRC_SNODE_H_ */
