#include <iostream>
#include <cmath>
using namespace std ;
int main ()
{
int p ;

float l,ir,d,e,x ;

cout <<"Enter loan: " ;
cin >> l;
cout <<" Enter payments: " ;
cin >>p;

cout <<"Enter monthly interest rate: " ;
cin >>ir ;
ir=ir/100 ;
e=(ir*pow(1+ir,p)/(pow(1+ir , p) -1 )) ;
e=e*l ;
d=e*p ;
x=e-l ;
cout <<"Loan amout is: " <<l ;

cout << "\n Monthly interest rate is: " <<ir*100 ;

cout <<" \n number of payments are: " << p ;
cout <<" \n Monthly payment is: " << e ;
cout <<"\n Annual paid back is: "<< d;
cout <<"\n Total interest paid: " <<x ;

return 0;


}

