/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#include "Ret.h"
#include <stdexcept>
using namespace std;


Ret::Ret(int _instAddress, string _instString): inst(_instString), instAddress(_instAddress)
{
	if (!valid()) throw logic_error("Bad construction of ret instruction.");
}

Ret::~Ret() {}

void Ret::fetch() { addressPopped = popfromstack(); }

bool Ret::valid()
{
	return (instAddress >= 0);
}
