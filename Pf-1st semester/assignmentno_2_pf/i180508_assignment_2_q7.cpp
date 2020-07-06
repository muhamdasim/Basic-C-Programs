#include <iostream>
using namespace std;

int main ()

{

int am;

int y,a,b,c,d,g,h,i,j,k,l,o;


cout <<"Enter amount: " ;

cin >> am;

y=am/500 ;

a= am%500 ;

b=a/100 ;

c=a%100 ;

d=c/50 ;
h= g/20 ;
i=g%20 ;
j=i/10 ;
k=i%10  ;
l=k/1 ;
o=k%1  ;

cout << "500: " << y ;
cout << "\n100: " << b;
cout <<"\n50: " << d;
cout <<"\n20: " <<h;
cout << "\n10: " << j ;
cout <<"\n1: " << l;


return 0;



}
