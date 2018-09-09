//Joseph DeLeonardis
//CSCE 121-101
//Due: June 27, 2016
//hw4pr1.cpp

#include "std_lib_facilities_4.h"
#include "Graph.h"
#include "Simple_window.h"





using namespace Graph_lib;
    
int main ()
try{
 Simple_window win(Point(100,100),600,600,"window");
    Rectangle flag{Point{45,100},360,200};
    Circle blue_ring{Point{100,200},50}; //Blue ring top left
    Circle yellow_ring{Point{280,240},50}; //Yellow ring bottom left
    Circle white_ring{Point{220,200},50}; //White ring top center
    Circle green_ring{Point{160,240},50}; //Green ring bottom right
    Circle red_ring{Point{340,200},50}; //Red ring top right

/*Colors defined below*/
blue_ring.set_color(Color::blue);
yellow_ring.set_color(Color::yellow);
white_ring.set_color(Color::white);
green_ring.set_color(Color::green);
red_ring.set_color(Color::red);
flag.set_color(Color::black);
flag.set_fill_color(Color::black);

/*line style and thickness of the circles, all circles set to 5 pixels*/
blue_ring.set_style(Line_style(Line_style::solid,5));
yellow_ring.set_style(Line_style(Line_style::solid,5));
white_ring.set_style(Line_style(Line_style::solid,5));
green_ring.set_style(Line_style(Line_style::solid,5));
red_ring.set_style(Line_style(Line_style::solid,5));

/*Attach objects below*/
win.attach(flag);
win.attach(blue_ring);
win.attach(yellow_ring);
win.attach(white_ring);
win.attach(green_ring);
win.attach(red_ring);
win.wait_for_button();
 
return 0;}
catch(exception& e){
    cerr <<"error: "<<e.what()<<'\n';
    return 1;
    }
    catch(...){
        cerr<<"Oops: unknown exception!\n";
        return 2;
    }
    