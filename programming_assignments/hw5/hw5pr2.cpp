//Joseph DeLeonardis
//CSCE 121-101
//Due: July 4, 2016
//hw5pr2.cpp

#include "std_lib_facilities_4.h"
int main()
try{
	
    list<string> mylist; //declares a list called my list
    list<string>::iterator it; //it will iterate through the list
    ifstream file("phonetic2.txt");
    /*phonetic2.txt is the same as phonetic.txt except the words are placed out 
     of order to test that the code is sorting the words*/
    
           string item;
        
        while(file>>item){
            if(item.empty()){
                continue;
            }
            mylist.push_front (item); //add the words to the list
        }
        
        mylist.sort(); //sort the list
        
        cout << "mylist contains:";
        for (it=mylist.begin(); it!=mylist.end(); ++it) //print list
        cout << ' ' << *it;
        cout << '\n';

    return 0;}
    
    catch(exception& e){
        cerr <<"error: "<<e.what()<<'\n';
        return 1;
    }

	
    catch(...){
        cerr<<"Oops: unknown exception!\n";
        return 2;
    }
    
    
    