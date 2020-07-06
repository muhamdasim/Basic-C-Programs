

#include <iostream>
#include <math.h>
using namespace std;
int main()

{

float a,b,c,d,root1,root2;

cout <<"Enter the values of a, b, ,c " ;
cin >>a >> b >> c;

d=b*b-4*a*c ;

if (d==0 )

{
root1=(-b)/(2*a) ;

cout <<"Root 1 is " << root1 ;
cout << "Root 2 is " << root1 ;

}

else if (d>0 )

{

root1= ((-b) + sqrt(d) ) /(2*a)  ;
root2= ((-b) - sqrt(d) ) /(2*a) ;

cout <<"Root 1 " << root1 ;
cout <<"Root 2 " <<root2 ;

}

else 

{

root1= ((-b) + sqrt(-d) ) /(2*a)  ;
root2= ((-b) - sqrt(-d) ) /(2*a) ;

cout <<"Root 1 " << root1 ;
cout <<"Root 2 " <<root2 ;

}

return 0;

}





