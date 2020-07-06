#include <iostream>
using namespace std; 
int main()

{

int sec;
cout <<"Enter seconds: " ;
cin >> sec;

if (sec>=60 and sec <=3599 )

{

int m;

m=sec/60 ;

cout << " Number of minutes " << m ;

}

else if ( sec >=3600 and sec <=86399 )

{

int h,m1,s1 ;

h=sec/3600 ;

m1 = sec%3600/60 ;
s1= sec- 3600 - (m1*60) ;

cout <<" Number of hours: " << h ;

cout << "\n Number of minutues: " << m1 ;

cout <<"\nNumber of seconds: " << s1 ;

}

else 
{
int d,h1,m2,s2 ;

d=sec/86400 ;
h1= sec%86400 ;
m2=sec%h1 ;
s2=sec%m2 ;


cout <<"Number of days: " << d ;

cout <<"Number of hours: " << h1 ;

cout <<"Number of minutes: " << m2;

cout <<"Number of sec: " << s2 ;


}


return 0;


}











