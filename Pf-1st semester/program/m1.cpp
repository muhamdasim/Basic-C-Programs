#include <iostream>
using namespace std;
int main ()

{

int x,y ;
char o;

cout <<"Enter first no: " <<endl ;
cin >> x;
cout <<"Enter second no: " <<endl;
cin >> y;
cout <<"Enter Operand " << endl; 
cin >> o;
switch (o)

{

case '+': 

cout <<"Sum is " << x+y << endl ; 

break ;

case '-':

cout <<"Difference is" <<x-y <<endl ;

break;

case '*':

cout <<"Product is" << x*y <<endl ;

break ;

case '/' :

if (y<=0) 
{
cout <<"Invalid Input" ;
}
else
{
cout <<"Division is" <<float(x)/y << endl ;
}
break;

case '%' : 

cout <<"Mod is" << x%y << endl ;

break;


default :

cout <<"Error" ;


}


return 0;


}


