/*
 * ArrayVector.h
 *
 *  Created on: 20 Nov 2019
 *      Author: Collabera
 */

#ifndef SRC_ARRAYVECTOR_H_
#define SRC_ARRAYVECTOR_H_

#include "IndexOutOfBounds.h"

template<typename E>
class ArrayVector {
public:
	ArrayVector();
	int size() const;
	bool empty() const;
	E& operator[](int i);
	E& at(int i) throw(IndexOutOfBounds);
	void erase(int i);
	void insert(int i, const E& e);
	void reserve(int N);
private:
	int capacity;
	int n;
	E * A;
};

#endif /* SRC_ARRAYVECTOR_H_ */
