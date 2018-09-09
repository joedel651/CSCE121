//Joseph DeLeonardis
//CSCE 121_101
//Due: June 6, 2016
//hw1pr3.cpp
#include "std_lib_facilities_4.h"

int main (){
	int penny = 0;
	int nickel = 0;
	int quarter =0;
	int half_dollar =0;
	int nickle_penny =0;
	int dime_penny =0;
	int quarter_penny =0;
	int half_dollar_penny =0;
	int cent=0;
    int dime=0;
	
	cout << "enter number of pennies"<<endl;
	cin >> penny;
	cout << "enter number of nickels"<<endl;
	cin >> nickel;
	cout << "enter number of dimes" <<endl;
	cin >> dime;
	cout << "enter number of quarters" << endl;
	cin >> quarter;
	cout << "enter number of half dollars"<<endl;
	cin >> half_dollar;
	
	cout <<" you have "<<penny<<" pennies" << endl;
	cout <<" you have "<<nickel<<" nickles"<<endl;
	cout <<" you have "<<dime<< " dimes" <<endl;
	cout <<" you have "<<quarter <<" quarter"<< endl;
	cout <<" you have "<<half_dollar<<" half dollars"<<endl;
	
	nickle_penny = nickel*5; //converting everything to pennies and adding
	dime_penny = dime*10;
	quarter_penny=quarter*25;
	half_dollar_penny=50*half_dollar;
	
	cent=nickle_penny+dime_penny+quarter_penny+half_dollar_penny;
	
	cout<<"The value of all your coins are "<<cent<<" cents."<<endl;
    
    return 0;

}