/*
Part of mips-simulator (github.com/hussam-a/mips-simulator)
Authors:
Hussam A. El-Araby (github.com/hussam-a)
Islam Faisal (github.com/decltypeme)
Mohamed Hassan (github.com/mh3081995)

Project code and configurations are under the GNU GPL license (mips-simulator/LICENSE) 
*/

#pragma once
#include "instructions.h"
#include <regex>
#include <sstream>
#include <string>
#include <ios>
#include <iomanip>
#include <algorithm>
typedef unsigned int immediateType;

using namespace std;

enum class instGenericType
{
	rType,
	iType,
	jType,
	jrType,
	retType,
	noOps,
	numTypes
};
constexpr int instTypeCount = int(instGenericType::numTypes);

//A function that resolves the immediate field
immediateType resolveImmediate(const string& strImmediate, bool signExtend = true);
//A function that resolves a jump immediate
immediateType resolveJImmediate(const string& strImmediate);


/*
Verify that a given instruction is syntactically correct
*/
bool verifyInstruction(const string&instString, const vector<regex>& instRules);
/*
Instruction rules need to be passed with same order of appearance in the enum class
Throws an exception
*/
inst* parseInstruction(const string&instString, const vector<regex>& instRules, int address);

int fileHandler(int argc, char** argv, inst** instsToFill, System::Windows::Forms::RichTextBox^ sourceField, System::Windows::Forms::RichTextBox^ resultsField);
