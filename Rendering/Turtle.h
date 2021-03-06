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
		_turtle = TurtleState();
		_color = Color();
		_width = 1;
		_scale = 1;
		_trails.clear();
	}

	void forward(double step) { 
		// fill this in
		Line l;
		l.c = _color;
		l.width = _width;
		l.a = _turtle.p;
		move(step);
		l.b = _turtle.p;
		_trails.push_back(l);
	}

	void move(double step){
		// fill this in
		_turtle.p.x += step * _scale * cos(_turtle.dir);
		_turtle.p.y += step * _scale * sin(_turtle.dir);
	}

	void turn(double ang){
		// fill this in
		_turtle.dir += ang;
	}

	void resize(double s){
		// fill this in
		_scale *= s;
	}

	void color(double r, double g, double b){
		// fill this in
		Color newcolor;
		newcolor.r = r;
		newcolor.g = g;
		newcolor.b = b;
		_color = newcolor;
	}

	void lineSize(double size){
		// fill this in
		_width = size;
	}

	Pt pos() { return _turtle.p; }
}; 

}
#endif