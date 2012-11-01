#pragma once
#include "Starbucks.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


using namespace std;
std::stringstream;
class sheararStarbucks : public Starbucks{
public:
	virtual void build(Entry* entry, int n);
	virtual Entry* getNearest(double x, double y);

};

