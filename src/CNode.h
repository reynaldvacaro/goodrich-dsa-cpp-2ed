/*
 * CNode.h
 *
 *  Created on: 25 Oct 2019
 *      Author: Collabera
 */

#ifndef SRC_CNODE_H_
#define SRC_CNODE_H_

#include "CircleList.h"

template<typename E> class CircleList;

template<typename E> class CNode {
private:
	E element;
	CNode<E> * next;
	friend class CircleList<E>;
};


#endif /* SRC_CNODE_H_ */
