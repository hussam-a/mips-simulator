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

class iformat : public inst
{
public:
	iformat( int _rt = -1, int _rs = -1, int _immediate = 0, int _instAddress = -1, std::string _instString = "nop");
	virtual ~iformat();
	virtual void fetch();
	virtual void writeBack();
	int rs;
	int rt;
	int immediate;
	int rsData;
	int rtData;
	int writeData;
	int instAddress;
	virtual bool valid();
};
