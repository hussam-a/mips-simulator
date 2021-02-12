/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#include "inst.h"
#include <stdexcept>
using namespace std;

inst::inst():inst("nop")
{}

inst::inst(string _instString = "nop"): instString(_instString){}
inst::~inst() {}
void inst::fetch() {}
void inst::execute() {}
void inst::memory() {}
void inst::writeBack() {}
bool inst::valid() { return true; }
