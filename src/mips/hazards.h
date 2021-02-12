/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#pragma once
#include <string>

extern int z;
void hazardDetection();
void dealWithForwarding(int value);

struct hazardMsg
	{
	int value;
	std::string hazard;
	hazardMsg(int i, std::string j) : value(i), hazard(j) {}
	hazardMsg() : hazardMsg(0, std::string("No Hazard")) {}
	};

extern hazardMsg hazardMsgs[14];
