/*
 * CircleList.h
 *
 *  Created on: 25 Oct 2019
 *      Author: Collabera
 */

#ifndef SRC_CIRCLELIST_H_
#define SRC_CIRCLELIST_H_

#include "CNode.h"

template<typename E> class CNode;

template<typename E>
class CircleList {
public:
	CircleList();
	virtual ~CircleList();
	bool empty() const;
	const E& front() const;
	const E& back() const;
	void advance();
	void add(const E& e);
	void remove();
private:
	CNode<E> * cursor;
};

#endif /* SRC_CIRCLELIST_H_ */
