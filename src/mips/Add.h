/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#pragma once
#include "rformat.h"
#include <string>
class Add:
	public rformat
{
public:
	Add(int _rd = -1, int _rs=-1, int _rt=-1, int _instAddress = -1, std::string _instString = "nop");
	virtual ~Add();
	virtual void execute();
};
