#include "PeriodNames.h"
#include "Period.h"
#include <iostream>
#include <string>
using namespace std;

Period::Period()
{
	currentPeriod = PRECAMBRIAN;
}


Period::Period(PeriodName name)
{
	currentPeriod = name;
}

string Period::toString(PeriodName name)
{
	string periodName;

	switch(name)
    {
        case PRECAMBRIAN:
            periodName= "Precambrian";
            break;
        case CAMBRIAN:
            periodName = "Cambrian";
            break;
        case ORDOVICIAN:
            periodName = "Ordovician";
            break;
        case SILURIAN:
            periodName = "Silurian";
            break;
        case DEVONIAN:
            periodName = "Devonian";
            break;
        case CARBONIFEROUS:
            periodName = "Carboniferous";
            break;
        case PERMIAN:
            periodName = "Permian";
            break;
        case TRIASSIC:
            periodName = "Triassic";
            break;
        case JURASSIC:
            periodName = "Jurassic";
            break;
        case CRETACEOUS:
            periodName = "Cretaceous";
            break;
        case PALEOGENE:
            periodName = "Paleogene";
            break;
        case NEOGENE:
            periodName = "Neogene";
            break;
	}
	return periodName;
}

int Period::toInt(PeriodName name)
{
	int startingYear;
	//switch case
    switch(name)
    {
    case PRECAMBRIAN:
        startingYear = 4500;
        break;
    case CAMBRIAN:
        startingYear = 570;
        break;
    case ORDOVICIAN:
        startingYear = 500;
        break;
    case SILURIAN:
        startingYear = 435;
        break;
    case DEVONIAN:
        startingYear = 395;
        break;
    case CARBONIFEROUS:
        startingYear = 345;
        break;
    case PERMIAN:
        startingYear = 280;
        break;
    case TRIASSIC:
        startingYear = 225;
        break;
    case JURASSIC:
        startingYear = 192;
        break;
    case CRETACEOUS:
        startingYear = 136;
        break;
    case PALEOGENE:
        startingYear = 65;
        break;
    case NEOGENE:
        startingYear = 23;
        break;
    }
    return startingYear;
}