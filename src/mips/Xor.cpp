/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#include "Xor.h"
using namespace std;

Xor::Xor(int _rd, int _rs, int _rt, int _instAddress, string _instString)
	:rformat(_rd, _rs, _rt,  _instAddress , _instString)
{
}


Xor::~Xor()
{
}

void Xor::execute()
{
	writeData = rsData ^ rtData;
}

