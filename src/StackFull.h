/*
 * StackFull.h
 *
 *  Created on: 31 Oct 2019
 *      Author: Collabera
 */

#ifndef SRC_STACKFULL_H_
#define SRC_STACKFULL_H_


#include "RuntimeException.h"

class StackFull: public RuntimeException {
	public: StackFull(const string& err) :
			RuntimeException(err) {}
};



#endif /* SRC_STACKFULL_H_ */
