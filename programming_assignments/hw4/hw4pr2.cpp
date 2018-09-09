//Joseph DeLeonardis
//CSCE 121-101
//Due: June 27, 2016
//hw4pr2.cpp

#include "std_lib_facilities_4.h"
#include "Graph.h"
#include "Simple_window.h"





using namespace Graph_lib;

int main ()
try{
    Simple_window win(Point(100,100),600,600,"window"); //window size
    Rectangle red_flag{Point{45,100},300,200};  //red part of the flag size
    Rectangle white_flag{Point{45,100},300,100}; //white part of the flag size
    Rectangle blue_flag{Point{45,100},100,200}; //blue part of the flag size

    /*Colors defined below*/
    red_flag.set_color(Color::red);
    white_flag.set_color(Color::white);
    blue_flag.set_color(Color::blue);
    
    /*Fill colors defined below*/
    red_flag.set_fill_color(Color::red);
    white_flag.set_fill_color(Color::white);
    blue_flag.set_fill_color(Color::blue);
/*the star of the flag is defined below*/
    Closed_polyline star;
    star.add(Point{495,55});
    star.add(Point{514,55});
    star.add(Point{520,40});
    star.add(Point{526,55});
    star.add(Point{550,55});
    star.add(Point{530,65});
    star.add(Point{540,85});
    star.add(Point{520,72});
    star.add(Point{500,85});
    star.add(Point{510,65});
    star.add(Point{495,55});
    
     star.move(-425,135); //move star to put it in the blue part of the flag
   /*set and fill the color of the star to white*/
 star.set_color(Color::white);
star.set_fill_color(Color::white);


    
    /*objects attached below*/
    win.attach(red_flag);
    win.attach(white_flag);
    win.attach(blue_flag);
    win.attach(star);
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
    
