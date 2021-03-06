/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#include "instructions.h"
#include <algorithm>
using namespace std;


void fetch()
{
	sort(begin(hazards), end(hazards));
	if (!(binary_search(begin(hazards), end(hazards), 51) || binary_search(begin(hazards), end(hazards), 52)
		|| binary_search(begin(hazards), end(hazards), 41) || binary_search(begin(hazards), end(hazards), 42)))
	{
		int oldPC = PC;
		PC = updatePC();
		pipeline[3] = pipeline[2];
		pipeline[2] = pipeline[1];
		pipeline[1] = pipeline[0];
		pipeline[0] = inst_memory[oldPC];
	}
	if ((binary_search(begin(hazards), end(hazards), 51)))
	{
		pipeline[3] = pipeline[2];
		pipeline[2] = pipeline[1];
		pipeline[1] = new inst();
	}
	if ((binary_search(begin(hazards), end(hazards), 52)))
	{
		pipeline[3] = pipeline[2];
		pipeline[2] = new inst();
	}
	if ((binary_search(begin(hazards), end(hazards), 41)))
	{
		PC = updatePC();
		pipeline[3] = pipeline[2];
		pipeline[2] = pipeline[1];
		pipeline[1] = pipeline[0];
		pipeline[0] = new inst();
	}

	if ((binary_search(begin(hazards), end(hazards), 42)))
	{
		PC = updatePC();
		pipeline[3] = pipeline[2];
		pipeline[2] = pipeline[1];
		pipeline[1] = new inst();
		pipeline[0] = new inst();
	}
}

void decode()
{
	pipeline[0]->fetch();
	hazardDetection();
	sort(begin(hazards), end(hazards));
	for_each(begin(hazards), end(hazards), dealWithForwarding);
}

void execute()
{
	pipeline[1]->execute();
}

void memory()
{
	pipeline[2]->memory();
}

void writeBack()
{
	pipeline[3]->writeBack();
}
