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

class Ret : public inst
{
public:
	Ret(int _instAddress = -1, std::string _instString = "nop");
	virtual ~Ret();
	void fetch();
	int addressPopped;
	int instAddress;
	virtual bool valid();
};
