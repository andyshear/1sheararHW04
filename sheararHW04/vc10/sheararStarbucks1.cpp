#include "sheararStarbucks1.h"
#include "cinder/app/AppBasic.h"
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

sheararStarbucks1::sheararStarbucks1(void)
{
}


sheararStarbucks1::~sheararStarbucks1(void)
{
}


void sheararStarbucks1 :: build(Entry* c, int n){
	buildEntry = new Entry[n];

	for(int i = 0; i<n; i++){
		buildEntry[i] = c[i];
	}


}

grid* sheararStarbucks1::insert(Entry* e, grid* g, double gridLevel){
	if( g == NULL) return new grid(e);

	if( (abs( g->data_->x - e->x )<=0.00001) && (abs( g->data_->y - e->y )<=0.00001) )
		return g;

	double g1 = gridLevel/4;
	double g2 = gridLevel/2;
	double g3 = g1+g2;
	double g4 = gridLevel;


	if(e->x <= g1 && e->y <= g1){
		
	}


	return g;
}