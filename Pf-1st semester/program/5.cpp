#include <iostream>
using namespace std;
int main()

{

int n;
cout <<"Enter number: " ;
cin >>n ;
n=n%2  ;

switch (n)

{

case 0: 
cout <<"Even" ;

break ;

case 1: 
cout <<"odd" ;

break ;

default:
cout <<"Invalid input" ;


}

return 0;

}
