/*
 * QueueEmpty.h
 *
 *  Created on: 19 Nov 2019
 *      Author: Collabera
 */

#ifndef SRC_QUEUEEMPTY_H_
#define SRC_QUEUEEMPTY_H_

#include "RuntimeException.h"
#include <string>

class QueueEmpty : public RuntimeException {
public:
	QueueEmpty(const string& err):RuntimeException(err) {

	}
};



#endif /* SRC_QUEUEEMPTY_H_ */
