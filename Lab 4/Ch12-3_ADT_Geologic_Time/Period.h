#pragma once

#include "PeriodNames.h"
#include "PeriodNames.h"
#include "Period.h"
#include <iostream>
#include <string>
using namespace std;

class Period
{
public:

	//default constructor
	//set to precambrian
	Period();

	//constructor w/ param
	//period set to specified period name
	Period(PeriodName);

	//observer function
	//return period as string
	string toString(PeriodName);

	//observer function
	//return the starting date for the period
	int toInt(PeriodName);

	//transformer function
	//increment the period to the next period
	void increment(PeriodName);

private:
	PeriodName currentPeriod;
};

