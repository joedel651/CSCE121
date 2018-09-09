//Joseph DeLeonardis
//CSCE 121-101
//Due: June 13, 2016
//hw2pr1.cpp
#include "std_lib_facilities_4.h"

double my_sqrt(double d) { // returns square root of d
	double x = 1;
	for (int i = 0; i < 10; i++) {
		x = (x + d / x) / 2;
	}
	return x;
}

int main()
    try{
	double n = 0.0;
	vector<int> k = {-100, -10, -1, 0, 1, 10, 100};
	for (unsigned int i = 0; i < k.size(); i++) {
		n = 3.14159 * pow(10.0, k[i]);
        cout << my_sqrt(n) << ", ";
        }
        return 0;
	}
        catch(exception& e){
            cerr <<"error: "<<e.what()<<'\n';
            return 1;
        }
        catch(...){
            cerr<<"Oops: unknown exception!\n";
            return 2;
        }
	