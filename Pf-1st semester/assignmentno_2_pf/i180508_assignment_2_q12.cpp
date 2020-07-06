


#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14

using namespace std;

int main ()

{

int rad;
double x,y,z;



cout <<"Enter angle " ;
cin >> rad ;


x=sin(rad*PI/180) ;
y=cos (rad*PI/180) ;
z=tan(rad*PI/180) ;

cout <<fixed;
cout <<setprecision(4);


cout <<"Sine of angle is: " << x;
cout <<"Cosine of angle is: " << y;
cout <<"Tangent of angle is: " << z;


return 0;
}

