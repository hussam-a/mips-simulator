/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#pragma once

#include "utility.h"
class inst
{
public:
	inst();
	inst(std::string _instString);
	virtual ~inst();
	virtual void fetch();
	virtual void execute();
	virtual void memory();
	virtual void writeBack();
	virtual bool valid();
	std::string instString;
};
