#include <iostream>
using namespace std; 

int main()

{

int x,y,z;
cout << "Enter first no: " ;
cin >> x;

cout <<"Enter second no: " ;
cin >> y;

cout <<"Enter third no: " ;
cin >> z;

if (x>y and y>z )

{
cout <<"Increasing order is: " << x,y,z ;

}

if (x>z and y>z )

{

cout <<"Increasing order is: " << x,y,z ;

}

if (y>x and x>z )

{
cout <<" Increasing order is: " << y,x,z ;

}

if (y>x and z>x ) 

{
cout << "Increasing order is: "<< y,z,x  ;
}
return 0;

}
