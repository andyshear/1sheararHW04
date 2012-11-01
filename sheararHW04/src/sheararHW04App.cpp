#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "Starbucks.h"
#include "sheararStarbucks1.h"

#include <iostream>
#include <fstream>


using namespace ci;
using namespace ci::app;
using namespace std;

class sheararHW04App : public AppBasic {
  public:
	
	//void mouseDown( MouseEvent event );	
	//void update();
	//void draw();
	int arrlength;
	int count;
	Entry* readFile();
	Entry* entries;
	sheararStarbucks1 ssb;
	void setup();
};

Entry* sheararHW04App::readFile(){
	
		
	
	ifstream in;
	in.open("../resources/Starbucks_2006.csv");
	if(!in){
		console()<<"Error in opening"<<endl;
	}


	arrlength = 1000;
	count = 0;

	while(!in.eof()){			
		string line, identifier_;
		double xin;
		double yin;
		getline(in,line,',');
		identifier_ = line;
		in >> xin;
		getline(in,line,',');
		in >> yin;
		getline(in,line,'\r');
		count++;		
	}
	arrlength = count;
	count = 0;
	entries = new Entry[arrlength];
	
	while(count<arrlength){
		
		string line;
		string identifier_;
		double xin;
		double yin;
		
		getline(in,line,',');
		identifier_ = line;
		in>>xin;
		getline(in,line,',');
		in>>yin;
		getline(in,line,'\r');

		(entries)[count].identifier = identifier_;
		(entries)[count].x = xin;
		(entries)[count].y = yin;
		count++;
		
	}
	return entries;
}


//format forked from regojr
void sheararHW04App::setup()
{
	console() << "Reading in locations..." << endl;
	Entry* entry = readFile();

	console() << "Building K-D Tree..." << endl;
	ssb.build(entries, arrlength);	
	console() << "Build Complete." << endl;

	console() << "Running Closest Starbucks Algorithm..." << endl;
	ssb.getNearest(0.1234567, 0.1234567); //ambiguous current location input for testing purposes

	console() << "Algorithm Complete. " << endl;

	console() << "Results Yielded		" << ssb.getNearest(0.1234567, 0.1234567)->identifier 
		<< "	as the closest Starbucks to your location." << endl;
}

/*void sheararHW04App::mouseDown( MouseEvent event )
{
}

void sheararHW04App::update()
{
}

void sheararHW04App::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( sheararHW04App, RendererGl )
*/