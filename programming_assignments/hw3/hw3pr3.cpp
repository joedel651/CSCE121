//Joseph DeLeonardis
//CSCE 121-101
//Due: June 20, 2016
//hw3pr3.cpp

#include "std_lib_facilities_4.h"
#include "Graph.h"
#include "Simple_window.h"





using namespace Graph_lib;
    
    
class Smiley : public Circle{



public:
    Smiley(Point p, int rr, Point eyel, Point eyer, int er): Circle(p, rr),eyeleft{eyel,er},eyeright{eyer,er}, pp(p), r(rr), face(p, rr) /*er is the eye radius eyel is the left eye eyer is the right eye the rest of the components are the same as the circle class.*/
    
    {
    	
    
        
        
    }
    
    Circle eyeleft;
    Circle eyeright;
    Circle face;
    Point pp;
    int r;
    void draw_lines() const;
};

void Smiley::draw_lines() const //this is to override circle so that there can be an arc for the mouth
{
    if (fill_color().visibility()) {	// fill
        fl_color(fill_color().as_int());
        fl_pie(pp.x,pp.y+50,r,r,180,360);
        fl_color(color().as_int());	// reset color
    }
    
    if (color().visibility()) {
        fl_color(color().as_int());
        fl_arc(pp.x,pp.y+50,r,r,180,360);
    }
}

class Frowney : public Circle{
    
    
    
public:
    Frowney(Point p, int rr, Point eyel, Point eyer, int er): Circle(p, rr),eyeleft{eyel,er},eyeright{eyer,er}, pp(p), r(rr), face(p, rr) /*er is the eye radius eyel is the left eye eyer is the right eye the rest of the components are the same as the circle class.*/
                                                                                                                                        
    {
        
        
        
        
    }
    
    Circle eyeleft;
    Circle eyeright;
    Circle face;
    Point pp;
    int r;
    void draw_lines() const;
};

void Frowney::draw_lines() const //this is to override circle so that there can be an arc for the mouth
{
    if (fill_color().visibility()) {	// fill
        fl_color(fill_color().as_int());
        fl_pie(pp.x,pp.y+50,r,r,0,180);
        fl_color(color().as_int());	// reset color
    }
    
    if (color().visibility()) {
        fl_color(color().as_int());
        fl_arc(pp.x,pp.y+50,r,r,0,180);
    }
}


int main (){
        Simple_window win(Point(100,200),600,600,"window"); // adding a window to display objects
    /*This is just to test to make sure the classes are doing what they are supposed to do. 
     the corrdinates are listed below for the various parts.*/
    Point p1{300,300};
    int rr = 100;
    Point eyer{320,320};
    int er = 10;
    Point eyel{320,330};
    
    
    
    Smiley s(p1,rr,eyer,eyel,er); //declareing a smiley face with the name s
    Frowney f(p1,rr,eyer,eyel,er); //declaring a frowney face with the name f

    win.attach(s);
    win.attach(s.eyeleft);
    win.attach(s.eyeright);
    win.attach(s.face);
    win.attach(f);
    win.attach(f.eyeleft);
    win.attach(f.eyeright);
    win.attach(f.face);
        win.wait_for_button();
    
    
    return 0;
    
}


