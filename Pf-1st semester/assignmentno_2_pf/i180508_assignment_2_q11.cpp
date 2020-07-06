


#include <iostream>
using namespace std;

int main ()

{

int l,i,g,o,t,m,tm,ta;


cout <<"Please Enter per month cost\n" ;

cout <<"Enter loan payment: " ;
cin >> l;

cout <<"\nEnter insurance payment: " ;
cin >> i;
cout <<"\nEnter gas payment: ";
cin >> g;
cout <<"\nEnter oil payment: ";
cin >> o;
cout <<"\nEnter tires payment: ";
cin >>t;
cout <<"\nEnter maintenance: " ;
cin >>m;

tm=l+i+g+o+t+m ;
ta=tm*12 ;

cout <<"\nTotal monthly cost is: " << tm ;

cout <<"\nTotal annual cost is: " <<ta;


return 0;


}
