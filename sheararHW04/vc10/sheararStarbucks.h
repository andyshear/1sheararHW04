#pragma once
#include "Starbucks.h"

class grid
{
public:
	grid* a_;
	grid* b_;
	grid* c_;
	grid* d_;
	grid* e_;
	grid* f_;
	grid* g_;
	grid* h_;
	grid* i_;
	grid* j_;
	grid* k_;
	grid* l_;

	Entry* data_;

	grid();
	grid(Entry* e);
	
};


class sheararStarbucks : public Starbucks{
public:
	Entry* buildEntry;
	sheararStarbucks(void);
	~sheararStarbucks(void);
	virtual void build(Entry* entry, int n);
	virtual Entry* getNearest(double x, double y);

};

