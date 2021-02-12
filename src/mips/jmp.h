/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#pragma once
#include "J.h"
#include <string>

class Jmp : public J
{
public:
	Jmp(int _immediate = -1, int _instAddress = -1, std::string _instString = "nop");
	virtual ~Jmp();
	virtual void fetch();
};
