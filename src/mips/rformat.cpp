/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#include "rformat.h"
#include <stdexcept>
using namespace std;

rformat::rformat(int _rd, int _rs, int _rt,  int _instAddress, string _instString)
	:inst(_instString), instAddress(_instAddress) , rs(_rs), rt(_rt), rd(_rd)
{
	if (!valid()) throw logic_error("Bad construction of rformat instruction.");
}

rformat::~rformat() {  }

bool rformat::valid()
{
	return (rs >= 0) && (rs <= 31)
		&& (rt >= 0) && (rt <= 31)
		&& (rd >= 0) && (rd <= 31)
		&& (instAddress >= 0);
}


void rformat::fetch()
{
	rsData = readRegister(rs);
	rtData = readRegister(rt);
}

void rformat::writeBack()
{
	writeRegister(rd, writeData);
}
