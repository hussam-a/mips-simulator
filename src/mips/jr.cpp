/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#include "Jr.h"
#include <stdexcept>
using namespace std;



Jr::Jr(int _rs, int _instAddress, string _instString)
	:inst(_instString), instAddress(_instAddress), rs(_rs)
{
	if (!valid()) throw logic_error("Bad construction of jr instruction.");
}

Jr::~Jr() {}

void Jr::fetch()
{
	rsData = readRegister(rs);
}

bool Jr::valid()
{
	return (rs >= 0) && (rs <= 31)
		&& (instAddress >= 0);
}
