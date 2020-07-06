#include <iostream>
using namespace std ;
int main ()

{

int x,g,h,i,j,k,l,s;

cout << "Enter 4 digit number: " ;
cin >> x;


g=x/1000 ;
h=x%1000 ;
i=h/100 ;
j=h%100 ;
k=j/10 ;
l=j%10 ;

s=g+i+k+l ;

cout << "Sum is: " << s;


}


