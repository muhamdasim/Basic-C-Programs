

#include <iostream>
#include <iomanip>

#define PI 3.14159265

using namespace std ;

int main ()

{


int d ;
float a,r,nos ;


cout <<"Enter diameter: " ;
cin >> d;

r=d/2 ;

a=PI*r*r ;

nos=a/14.125 ;

cout <<fixed;
 cout <<setprecision(1);
 cout <<"Number of slices: " << nos;


return 0;

}

