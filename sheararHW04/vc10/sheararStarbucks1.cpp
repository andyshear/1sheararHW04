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
	m_ = NULL;
	n_ = NULL;
	o_ = NULL;
	p_ = NULL;
	data_ = NULL;
}
grid::grid(Entry* e) {
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
		grid(e);
		return g->a_;
	}
	if((e->x >= g1 && e->x <= g2) && e->y <= g1){
		return g->b_;
	}
	if((e->x >= g2 && e->x <= g3) && e->y <= g1){
		return g->c_;
	}
	if((e->x >= g3 && e->x <= g4) && e->y <= g1){
		return g->d_;
	}
	if(e->x <= g1 && (e->y >= g1 && e->y <= g2)){
		return g->e_;
	}
	if((e->x >= g1 && e->x <= g2) && (e->y >= g1 && e->y <= g2)){
		return g->f_;
	}
	if((e->x >= g2 && e->x <= g3) && (e->y >= g1 && e->y <= g2)){
		return g->g_;
	}
	if((e->x >= g3 && e->x <= g4) && (e->y >= g1 && e->y <= g2)){
		return g->h_;
	}
	if(e->x <= g1 && (e->y >= g2 && e->y <= g3)){
		return g->i_;
	}
	if((e->x >= g1 && e->x <= g2) && (e->y >= g2 && e->y <= g3)){
		return g->j_;
	}
	if((e->x >= g2 && e->x <= g3) && (e->y >= g2 && e->y <= g3)){
		return g->k_;
	}
	if((e->x >= g3 && e->x <= g4) && (e->y >= g2 && e->y <= g3)){
		return g->l_;
	}
	if(e->x <= g1 && (e->y >= g3 && e->y <= g4)){
		return g->m_;
	}
	if((e->x >= g1 && e->x <= g2) && (e->y >= g3 && e->y <= g4)){
		return g->n_;
	}
	if((e->x >= g2 && e->x <= g3) && (e->y >= g3 && e->y <= g4)){
		return g->o_;
	}
	if((e->x >= g3 && e->x <= g4) && (e->y >= g3 && e->y <= g4)){
		return g->p_;
	}
	
	return g;
}


//calculateDistance forked from regojr
double sheararStarbucks1::calculateDistance( double x_, double y_, grid* g)
{
	if(g->data_ == NULL) return 2.0; //because all points that exist will be closer
	else {
		double aSq, bSq; 
		aSq = abs(x_ - (g->data_->x)) * abs(x_ - (g->data_->x));
		bSq = abs(y_ - (g->data_->y)) * abs(y_ - (g->data_->y));
		return sqrt(aSq + bSq);
	}
}

Entry* sheararStarbucks1::getNearest(double x, double y)
{
	return searchGrid(x, y, g)->data_;
}


grid* sheararStarbucks1::searchGrid(double x, double y, grid* g)
{
	return g;
}