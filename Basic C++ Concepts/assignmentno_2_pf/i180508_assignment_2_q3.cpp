#include <iostream>
using namespace std;

int main ()

{

int x,y ;
int s,d,p,q,r ;

cout << "Enter first no: " ;
cin >> x;

cout <<"Enter second no: " ;
cin >> y;

s=x+y ;
d=x-y ;
p=x*y ;
  
 q=x/y ;
 r=x%y ;

cout <<"sum is:" << s;
cout <<"\nDifference is:" << d;
cout <<"\nProduct is:" << p;
cout <<"\nquotient is:" << q;
cout <<"\nremainder is:"<< r;

return 0;

}

