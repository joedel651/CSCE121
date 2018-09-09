//Joseph DeLeonardis
//CSCE 121-101
//Due: July 4, 2016
//hw5pr1.cpp

#include "std_lib_facilities_4.h"


bool is_palindrome(string s){
    
    
    string::iterator left = s.begin();
    string::iterator right= s.end()-1;
    
    
    while(left<right){ //As it incriments from the left check for spaces and punct
       
	   if(isspace(*left) || ispunct(*left))
	   {
		   
		   ++left;
		   
	   }
        
		else if(isspace(*right) || ispunct(*right))
        { //As it incriments from the right check for spaces and punct
			--right;
			
		}
	else
	{   /*convert to lower case and check if the left side equals the right
         return true if the left equals the right*/
        if(tolower(*left)!=tolower(*right)){return false;}
        ++left;
        --right;
		
    }
    return true;
}}

int main()
try{
	
while(true){
    string s; //s is the string to be tested if it is a palindrome
    cout<<"type a sentance"<<endl;
    getline(cin,s); //cin the variable s
    
           if(is_palindrome(s)){
        
		   cout<<"this is a palindrome "<<s<<endl;} //print if true
		
	   
        else cout<<"this is not a palindrome"<<endl;  //print if false
}


    return 0;}
	
	catch(exception& e){
        cerr <<"error: "<<e.what()<<'\n';
        return 1;
    }
    catch(...){
        cerr<<"Oops: unknown exception!\n";
        return 2;
    }
    
    
    