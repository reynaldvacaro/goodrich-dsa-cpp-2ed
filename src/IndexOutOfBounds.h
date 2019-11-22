/*
 * IndexOutOfBounds.h
 *
 *  Created on: 20 Nov 2019
 *      Author: Collabera
 */

#ifndef SRC_INDEXOUTOFBOUNDS_H_
#define SRC_INDEXOUTOFBOUNDS_H_

#include "RuntimeException.h"
#include <string>

class IndexOutOfBounds : public RuntimeException {
public:
	IndexOutOfBounds(const string& err):RuntimeException(err) {

	}
};



#endif /* SRC_INDEXOUTOFBOUNDS_H_ */
