/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#include "Ble.h"
#include <algorithm>
using namespace std;


Ble::Ble(int _rt, int _rs, int _immediate, int _instAddress, string _instString)
	:iformat(_rt, _rs, _immediate, _instAddress, _instString) {}

Ble::~Ble() {}

void Ble::fetch()
{
	rsData = readRegister(rs);
	rtData = readRegister(rt);
	addressIfNotTaken = PC;
	addressIfTaken = immediate + PC;
}

void Ble::execute()
{
	if (rsData <= rtData)
	{
		addressTrue = addressIfTaken;
	}
	else
	{
		addressTrue = addressIfNotTaken;
	}

	if (right_prediction() == false)
	{
		hazards[z] = 42;
		z++;
		int* it = find(begin(hazards), end(hazards), 41);
		if (it != end(hazards))
		{
			*it = 0;
		}
		it = find(begin(hazards), end(hazards), 51);
		if (it != end(hazards))
		{
			*it = 0;
		}

		it = find(begin(hazards), end(hazards), 52);
		if (it != end(hazards))
		{
			*it = 0;
		}
		sort(begin(hazards), end(hazards));
	}
}

void Ble::writeBack() {}
