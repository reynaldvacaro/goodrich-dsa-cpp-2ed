/*
 * ArrayStack.h
 *
 *  Created on: 31 Oct 2019
 *      Author: Collabera
 */

#ifndef SRC_ARRAYSTACK_H_
#define SRC_ARRAYSTACK_H_

#include "StackEmpty.h"
#include "StackFull.h"

template<typename E>
class ArrayStack {
	enum { DEFAULT_CAPACITY = 100};
public:
	ArrayStack(int cap = DEFAULT_CAPACITY);
	int size() const;
	bool empty() const;
	void push(const E&);
	const E& top() const ;
	void pop();
private:
	E* S;
	int capacity;
	int t;
};

#endif /* SRC_ARRAYSTACK_H_ */
