/*
 * RuntimeException.h
 *
 *  Created on: 31 Oct 2019
 *      Author: Collabera
 */

#ifndef SRC_RUNTIMEEXCEPTION_H_
#define SRC_RUNTIMEEXCEPTION_H_

#include<string>

using namespace std;

class RuntimeException {
private:
	string errorMsg;
public:
	RuntimeException(const string& err) {errorMsg = err;}
	string getMessage() const { return errorMsg;}

};




#endif /* SRC_RUNTIMEEXCEPTION_H_ */
