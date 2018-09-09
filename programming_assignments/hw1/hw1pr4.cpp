//Joseph DeLeonardis
//CSCE 121-101
//Due: June 6, 2016
//hw1pr4.cpp
#include "std_lib_facilities_4.h"
using namespace std;

int main() {


auto x = 1;
auto x2 = x * x;
auto y = sqrt(x2);
//cout<<typeid(x).name()<<endl;
for(int i=0;i<11;i++){
cout<<"square root of ("<<x<<" squared) is "<<y<<endl;
x *= 10;
x2 = x * x;
y=sqrt(x2);
}

return 0;
}


/*square root of (1 squared) is 1.00000
square root of (10 squared) is 10.0000
square root of (100 squared) is 100.000
...
*/

/* incorrect answers are shown after 1000 because the compiler is treating the auto
like an int which has a max/min values of +- 32767. The correct answers could be given by
changing auto to long so that it will be able to hold bigger values. */

//expected run time error when compiled in putty because of overflow which was expected