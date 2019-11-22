/*
 * StackEmpty.h
 *
 *  Created on: 31 Oct 2019
 *      Author: Collabera
 */

#ifndef SRC_STACKEMPTY_H_
#define SRC_STACKEMPTY_H_

#include "RuntimeException.h"

class StackEmpty: public RuntimeException {
	public : StackEmpty(const string& err) :
			RuntimeException(err) {}
};


#endif /* SRC_STACKEMPTY_H_ */
