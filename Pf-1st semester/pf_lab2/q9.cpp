


#include <iostream>
using namespace std ;

int main ()

{

int l1,w1,l2,w2 ;
int a1,a2 ;

cout <<"Enter length: " ;
cin >> l1;

cout <<"Enter width: " ;
cin >>w1;

cout <<"Enter length: " ;
cin >> l2;

cout <<"Enter width: " ;
cin >>w2;


a1=l1*w1 ;

a2= l2*w2 ;

if (a1>a2)

{

cout <<"Triangle 1 has larger area" ;

}

if (a1<a2)

{

cout <<"Triangle 2 has larger area" ;

}

if (a1==a2)

{

cout <<"Same area" ;

}

return 0;

}


