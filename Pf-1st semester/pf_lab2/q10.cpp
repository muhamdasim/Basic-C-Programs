



#include <iostream>
using namespace std ;

int main ()

{

float bmi ;

float h,w,x,y ;

cout <<"Enter your height: " ;
cin >> h;

cout <<"Enter your weight: " ;
cin >> w;

x=w*703 ;
y=h*h ; 

bmi=x/y;

if (bmi>18.5 and bmi<25 )

{

cout <<"Optimal weight" ;

}


if (bmi <18.5)

{

cout << "Underweight" ;

}

if ( bmi>25)
{
cout <<"Overweight " ;

}


return 0;

}


