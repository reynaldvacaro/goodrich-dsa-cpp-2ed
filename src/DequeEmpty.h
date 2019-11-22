/*
 * DequeEmpty.h
 *
 *  Created on: 19 Nov 2019
 *      Author: Collabera
 */

#ifndef SRC_DEQUEEMPTY_H_
#define SRC_DEQUEEMPTY_H_

#include "RuntimeException.h"

class DequeEmpty : public RuntimeException {
public:
	DequeEmpty(const string& err):RuntimeException(err) {

	}
};



#endif /* SRC_DEQUEEMPTY_H_ */
