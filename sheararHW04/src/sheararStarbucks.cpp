#include "cinder/app/AppBasic.h"
#include "sheararStarbucks.h"
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <io.h>
#include <iostream>


using namespace std;

grid::grid() {
	a_ = NULL;
	b_ = NULL;
	c_ = NULL;
	d_ = NULL;
	e_ = NULL;
	f_ = NULL;
	g_ = NULL;
	h_ = NULL;
	i_ = NULL;
	j_ = NULL;
	k_ = NULL;
	l_ = NULL;
	data_ = NULL;
}
grid::grid(Entry* e) {
	a_ = NULL;
	b_ = NULL;
	c_ = NULL;
	d_ = NULL;
	e_ = NULL;
	f_ = NULL;
	g_ = NULL;
	h_ = NULL;
	i_ = NULL;
	j_ = NULL;
	k_ = NULL;
	l_ = NULL;
	data_ = e;
}
sheararStarbucks :: sheararStarbucks {};

sheararStarbucks::~sheararStarbucks(void)
{
}

void sheararStarbucks :: build(Entry* c, int n){
	buildEntry = new Entry[n];

	for(int i = 0; i<n; i++){
		buildEntry[i] = c[i];
	}


}