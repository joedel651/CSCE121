//Joseph DeLeonardis
//CSCE 121-101
//Due: June 6, 2016
//hw1pr2.cpp
#include "std_lib_facilities_4.h"
//#include <iostream>
//#include <cmath>
//using namespace std;

int main() {

double number_1=0;
double number_2=0;
double output=0;
char operation;

//this statement is for the initial calculation
cout<<"Please enter a number then an operation (choose from +,-,/ or *) and another number."<<endl;  
//should be + - * / or an error should be given


while(cin>>number_1>>operation>>number_2 ){
//this while loop is not working correctly with cin >> operation >> number_1 >> number_2
//will work in all cases except when a non-number for operands is entered

 if (operation=='+'){ output=number_1+number_2;
 	cout<<output<<endl;
 	
 cout<<"Please enter an operation.(choose from +,-,/ or *)"<<endl;  //should be + - * / or an error should be given
cout<<"Enter the first value."<<endl;
cout<<"Enter the second value."<<endl;
cout<<output<<endl;

}
		else if (operation=='-'){output=number_1-number_2;
		cout<<output<<endl;
cout<<"Please enter an operation.(choose from +,-,/ or *)"<<endl;  //should be + - * / or an error should be given
cout<<"Enter the first value."<<endl;
cout<<"Enter the second value."<<endl;
cout<<output<<endl;
	}
		else if (operation=='*'){output=number_1*number_2;
		cout<<output<<endl;
cout<<"Please enter an operation.(choose from +,-,/ or *)"<<endl;  //should be + - * / or an error should be given
cout<<"Enter the first value."<<endl;
cout<<"Enter the second value."<<endl;
cout<<output<<endl;
		 }
		else if (operation=='/'){ output=number_1/number_2;
			cout<<"\n The solution is "<<output<<endl;
			 cout<<"Please enter an operation.(choose from +,-,/ or *)"<<endl;  //should be + - * / or an error should be given
cout<<"Enter the first value."<<endl;
cout<<"Enter the second value."<<endl;
cout<<output<<endl;
			}
		if (number_2 == 0 && operation =='/'){
			cout<<"Dividing by zero is an undefined number."<<output<<endl;}
			
			}
			
		cout<<"Invalid operation, try again."<<endl; 

return 0;
}