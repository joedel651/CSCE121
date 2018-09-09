//Joseph DeLeonardis
//CSCE 121-101
//Due: June 13, 2016
//hw2pr3.cpp
#include "std_lib_facilities_4.h"


int main() {
    try{
	 vector<string>AM; //vector to store the amount of times the 4 words are typed.
        cout<<"Type a sentence with space and period at the end."<<endl;
        
        int count=0;
    for(string ag; cin>>ag;){
        if(ag=="aggie" || ag=="Aggies" || ag=="Aggie" || ag=="aggies"){
        AM.push_back(ag);
        count = AM.size();
            
            
        }
        if(ag==".")break;}cout<<count;}

    
    catch(exception& e){
        cerr <<"error: "<<e.what()<<'\n';
        return 1;
    }
    catch(...){
        cerr<<"Oops: unknown exception!\n";
        return 2;
    }
    
    
    
	
	
	
	
	

return 0;}