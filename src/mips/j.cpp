/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#include "J.h"
#include <stdexcept>
using namespace std;



J::J(int _immediate, int _instAddress, string _instString)
	: inst(_instString), instAddress(_instAddress), immediate(_immediate)
{
	if (!valid()) throw logic_error("Bad construction of a jump instruction.");
}

J::~J() {}

void J::fetch()
{
	int tempPC = PC >> 26;
	tempPC = tempPC << 26;
	address = immediate  | tempPC;
}

bool J::valid()
{
	return (immediate >=0)
		&& (instAddress >= 0);
}
