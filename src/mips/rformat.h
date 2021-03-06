/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#pragma once
#include "inst.h"
#include <string>

class rformat : public inst
{
public:
	rformat(int _rd = -1, int _rs = -1,  int _rt = -1, int _instAddress = -1, std::string _instString = "nop");
	virtual ~rformat();
	virtual void fetch();
	virtual void writeBack();
	int rs;
	int rt;
	int rd;
	int rsData;
	int rtData;
	int writeData;
	int instAddress;
	virtual bool valid();
};
