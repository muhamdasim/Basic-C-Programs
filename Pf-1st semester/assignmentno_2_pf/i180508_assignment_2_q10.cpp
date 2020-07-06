




#include <iostream>
using namespace std;
int main ()

{

float p;

float  cst,sst,tst,ts ;


cout <<"Enter Purchase amount\n" ;

cin >>p;



sst=0.05*p ;
cst=0.025*p ;
tst=sst+cst ;
ts=p-tst; 

cout <<"Purchase amount is:" <<p;
cout << "\nState sales tax:" <<sst ;
cout <<"\ncountry sales tax:" <<cst ;
cout <<"\nTotal sales tax:" <<tst ;
cout << "\nTotal sale:" <<ts ;

return 0;


}


