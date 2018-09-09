
//Joseph DeLeonardis
//CSCE 121-101
//Due: June 20, 2016
//hw3pr2.cpp
#include "std_lib_facilities_4.h"
#include "Graph.h"
#include "Simple_window.h"




int main(){
using namespace Graph_lib;
    
    try{
    
    
    Point tl{100,100}; //top left corner of the screen

    Simple_window win(Point(100,200),600,600,"window"); //window is defined here
    Circle cl {Point{300,300},50}; //this is the circle the mark will move around
  
        win.attach(cl); // attaching the circle to the window
        
      /*m3 is a mark that is being moved around the circle with a move function to allow it to move a set amount of times around the circle. */


        Mark m3 {Point{300,245},'x'};
        win.attach(m3);
        win.wait_for_button();
        m3.move(37,17);  //the mark will move with respect to the last coordinate it was at
        win.attach(m3);
        win.wait_for_button();
        m3.move(18,38);
        win.attach(m3);
        win.wait_for_button();
        m3.move(-18,40);
        win.attach(m3);

        win.wait_for_button();
        m3.move(-37,15);
        win.attach(m3);

        win.wait_for_button();
        m3.move(-35,-15);
        win.attach(m3);

        win.wait_for_button();
        m3.move(-20,-40);
        win.attach(m3);

        win.wait_for_button();
        m3.move(20,-38);
        win.attach(m3);

        win.wait_for_button(); //keep the window open






        
    
    
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