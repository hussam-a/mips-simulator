/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#include "Addi.h"
using namespace std;

Addi::Addi(int _rt, int _rs,  int _immediate, int _instAddress, string _instString)
	:iformat(_rt, _rs, _immediate, _instAddress, _instString)
{

}


Addi::~Addi()
{
}

void Addi::execute()
{
	writeData = rsData + immediate;
}
