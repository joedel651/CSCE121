//Joseph DeLeonardis
//CSCE 121-101
//Due: June 13, 2016
//hw2pr4.cpp
#include "std_lib_facilities_4.h"

double my_sqrt(double n) { // returns square root of d
	double x = 1;

	for (int i = 0; i < 10; i++) {
		x = (x + n / x) / 2;
	}
	return x;
}

double my_sqrt2(double n) { // returns square root of d
    double x = 1;
    while(n > 8.0/5) {
        n /= 4;
        x*= 2;
    }
    
    while(n < 2.0/5) {
        n *= 4;
        x/= 2;
    }
    
    
    
    return x*my_sqrt(n);
}
    int main()
    try{
	double n = 0.0;
    double relative_error_per_cent = 0.0;
    double relative_error_per_cent2 = 0.0; // percent error for my_sqrt2
	vector<int> k = {-100, -10, -1, 0, 1, 10, 100}; //k is from proble two the initial function
	for (unsigned int i = 0; i < k.size(); i++) {
		n = 3.14159 * pow(10.0, k[i]);
        cout <<"The value of the square root is "<< my_sqrt(n) << " ";
        relative_error_per_cent=100*((my_sqrt(n)-sqrt(n))/sqrt(n));
        cout << "The percent error of the original square root is " << relative_error_per_cent << endl;}
        
        vector<int> h ={-100, -10, -1, 0, 1, 10, 100}; // h is for the more accurate function
        for (unsigned int i = 0; i < h.size(); i++) {
            n = 3.14159 * pow(10.0, h[i]);
            cout <<"The value of the more accurate square root is "<< my_sqrt2(n) << " ";
            relative_error_per_cent2=100*((my_sqrt2(n)-sqrt(n))/sqrt(n));
            cout << "The percent error is of the more accurate square root is " << relative_error_per_cent2 << endl;
          
        }
        
        
        }
        catch(exception& e){
            cerr <<"error: "<<e.what()<<'\n';
            return 1;
        }
        catch(...){
            cerr<<"Oops: unknown exception!\n";
            return 2;
        }
	