/*
 * ArrayVector.cpp
 *
 *  Created on: 20 Nov 2019
 *      Author: Collabera
 */

#include "ArrayVector.h"
#include <algorithm>
#include <cstdio>

using namespace std;

template<typename E> ArrayVector<E>::ArrayVector() {
	this->capacity = 0;
	this->n = 0;
	this->A = NULL;
	// TODO Auto-generated constructor stub

}

template<typename E> int ArrayVector<E>::size() const { return n;}
template<typename E> bool ArrayVector<E>::empty() const { return size() == 0; }
template<typename E> E& ArrayVector<E>::operator [](int i) { return this->A[i];}
template<typename E> E& ArrayVector<E>::at(int i) throw(IndexOutOfBounds) {
	if(i < 0|| i >= n)
		throw IndexOutOfBounds("Illegal index in function at()");

	return A[i];
}

template<typename E> void ArrayVector<E>::erase(int i) {
	for(int j = i + 1; j < n; j ++)
		A[j - 1] = A[j];

	n --;
}

template<typename E> void ArrayVector<E>::reserve(int N) {
	if(capacity >= N) return;

	E * B = new E[N];

	for(int j = 0; j < n; j ++)
		B[j] = A[j];

	if(A != NULL) delete [] A;

	A = B;

	capacity = N;
}

template<typename E> void ArrayVector<E>::insert(int i, const E& e) {
	if(n >= capacity)
		reserve(max(1,2 * capacity));

	for(int j = n - 1; j >= i; j --)
		A[j+1] = A[j];

	A[i] = e;

	n ++;
}

