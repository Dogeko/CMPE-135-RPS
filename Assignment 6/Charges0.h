#ifndef CHARGES0_H
#define CHARGES0_H

#include <iostream>
#include "Bot.h"
#include "actionState.h"
using namespace std;

class Charges0 : public actionState
{
public:
	void pick(int botChoice);
};

#endif
