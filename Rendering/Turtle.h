#ifndef TURTLE_H
#define TURTLE_H

#include <iostream> 
#include <vector> 
#include <cmath> 

#define M_PI 3.14159265359

using namespace std; 

namespace Turtle{

class Pt{
public: 
	Pt() { x=0;y=0;}
	double x,y; 
}; 

class Color{
public: 
	Color() { r=1;g=1;b=1;}
	double r,g,b; 
};

class Line{
public: 
	Line() { width=1;}
	Pt a,b; 
	Color c; 
	double width; 
}; 

class TurtleState{
public: 
	TurtleState() {	dir = 0; }
	Pt p; 
	double dir; // angle in radians
}; 

// keeps the turtle and a history of its trails 
class TurtleMachine{
protected: 
	TurtleState _turtle; 
	vector<Line> _trails; 
	Color _color; 
	double _width; 
	double _scale; 
public: 
	TurtleMachine(){ reset(); }

	vector<Line>* getLines() { return &_trails; }

	void reset() { 
		// fill this in
	}

	void forward(double step) { 
		// fill this in
	}

	void move(double step){
		// fill this in
	}

	void turn(double ang){
		// fill this in
	}

	void resize(double s){
		// fill this in
	}

	void color(double r, double g, double b){
		// fill this in
	}

	void lineSize(double size){
		// fill this in
	}

	Pt pos() { return _turtle.p; }
}; 

}
#endif