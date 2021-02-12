/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#include "Jmp.h"
#include <stdexcept>
using namespace std;



Jmp::Jmp(int _immediate, int _instAddress, string _instString)
	:J(_immediate, _instAddress, _instString) {}

Jmp::~Jmp() {}

void Jmp::fetch() { J::fetch(); pushtostack(PC);}
