//Joseph DeLeonardis
//CSCE 121-101
//Due: June 27, 2016
//hw4pr3.cpp

#include "std_lib_facilities_4.h"
#include "Graph.h"
#include "Simple_window.h"

int main()
try{
using namespace Graph_lib;
    //below is a window set for the problem with a title
    Simple_window win(Point(100,100),600,600,"Average Temperuates per year in college station");
    Vector_ref<Rectangle> refs;
    //temperatures are defined as a vector of doubles
    vector<double> v = { 47.1,48.3,49.5,50.9,51.1,54.5,55.2,55.5,56.9,58.1 };

    for(int i = 0; i<(int)v.size(); i++){
        
        /*the program will run through the for loop for all items in the vector create a new rectangle each time and 
         move that rectangle to the desired spot on the graph.*/
        refs.push_back(new Rectangle{Point{(int)30+(int)50*i,(int)550-5*(int)v[i]},(int)50,(int)5*(int)v[i]});
        //int() to convert double to int because there is a set amount of pixels
        //new creates a new rectangle each time
        //refs is a reference to v
        win.attach(refs[i]); // attach the vector to the window
        
        /*told the compiler everything was an int to remove warnings*/
    }
    
 //fill the colors of all the rectangles in the bar graph
    refs[0].set_color(Color::black);
    refs[0].set_fill_color(Color::red);
    refs[1].set_color(Color::black);
    refs[1].set_fill_color(Color::blue);
    refs[2].set_color(Color::black);
    refs[2].set_fill_color(Color::green);
    refs[3].set_color(Color::black);
    refs[3].set_fill_color(Color::magenta);
    refs[4].set_color(Color::black);
    refs[4].set_fill_color(Color::dark_red);
    refs[5].set_color(Color::black);
    refs[5].set_fill_color(Color::cyan);
    refs[6].set_color(Color::black);
    refs[6].set_fill_color(Color::black);
    refs[7].set_color(Color::black);
    refs[7].set_fill_color(Color::yellow);
    refs[8].set_color(Color::black);
    refs[8].set_fill_color(Color::white);
    refs[9].set_color(Color::black);
    refs[9].set_fill_color(Color::dark_green);

    //attach and X and Y axis
    
    Axis xa {Axis::x, Point{30,550},500,10,""};
    win.attach(xa);
    
    Axis ya{Axis::y, Point{30,550},500, 10,"Temperature F"};
    win.attach(ya);
    
//put all the years below the x axis as a lable
    Text year1{Point{35,565}, "2004"};
    Text year2{Point{85,565}, "2005"};
    Text year3{Point{135,565}, "2006"};
    Text year4{Point{185,565}, "2007"};
    Text year5{Point{235,565}, "2008"};
    Text year6{Point{285,565}, "2009"};
    Text year7{Point{335,565}, "2010"};
    Text year8{Point{385,565}, "2011"};
    Text year9{Point{435,565}, "2012"};
    Text year10{Point{485,565}, "2013"};
 
    
//lable the y axis i for incriment
    Text i1{Point{35,505}, "10"};
    Text i2{Point{35,455}, "20"};
    Text i3{Point{35,405}, "30"};
    Text i4{Point{35,355}, "40"};
    Text i5{Point{35,305}, "50"};
    Text i6{Point{35,255}, "60"};
    Text i7{Point{35,205}, "70"};
    Text i8{Point{35,155}, "80"};
    Text i9{Point{35,105}, "90"};

    
//attach all the years and the incriments
    win.attach(year1);
    win.attach(year2);
    win.attach(year3);
    win.attach(year4);
    win.attach(year5);
    win.attach(year6);
    win.attach(year7);
    win.attach(year8);
    win.attach(year9);
    win.attach(year10);
    win.attach(i1);
    win.attach(i2);
    win.attach(i3);
    win.attach(i4);
    win.attach(i5);
    win.attach(i6);
    win.attach(i7);
    win.attach(i8);
    win.attach(i9);
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
    
