
//Joseph DeLeonardis
//CSCE 121-101
//Due: June 20, 2016
//hw3pr1.cpp
#include "std_lib_facilities_4.h"
#include "Graph.h"
#include "Simple_window.h"




int main(){
using namespace Graph_lib;
  
    try {
    
    Point tl{100,100}; //setting what coordinate the top left of the screen is

    Simple_window win(Point(100,200),600,600,"window"); //setting the size and name of the window

    Open_polyline J;  //the letter J defined as an open polygon
    J.add(Point{50,200}); // the coordinates go from 200 to 350 in Y direction to meet the requested size
    J.add(Point{250,200});
    J.add(Point{150,200});
    J.add(Point{150,350});
    J.add(Point{50,350});
    J.add(Point{50,320});
    
    Open_polyline A;
    A.add(Point{300,200});
    A.add(Point{250,350});
    A.add(Point{275,275});
    A.add(Point{325,275});
    A.add(Point{300,200});
    A.add(Point{350,350});
    
    Open_polyline D;
    D.add(Point{375,200});
    D.add(Point{375,350});
    D.add(Point{450,275});
    D.add(Point{375,200});
    D.add(Point{450,275});
    D.add(Point{375,200});
    
   /* All three initals where constructed with open polygons it seemed to be the easiest and most effective
    way to construct the letters.*/
    
    
    J.set_color(Color::red);
    J.set_style(Line_style(Line_style::solid,2)); //sets the style and changes thickness for J
    
    A.set_color(Color::white); // sets A to be  the color white
    A.set_style(Line_style(Line_style::solid,2)); //sets the line style and the thickness for A
    
    D.set_color(Color::blue);//sets D to be the color Blue
    D.set_style(Line_style(Line_style::solid,2)); //sets the line style and the thickness for D

        /*attaching all the objects to the window and then keeping the window open to display them.*/
    win.attach(J);
    win.attach(A);
    win.attach(D);
    win.wait_for_button();
    
    
    return 0;
}

    catch(exception& e){
        cerr <<"error: "<<e.what()<<'\n';
        return 1;
    }
    catch(...){
        cerr<<"Oops: unknown exception!\n";
        return 2;
    }}