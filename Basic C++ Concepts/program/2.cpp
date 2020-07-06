#include <iostream>

using namespace std ;

int main ()

{

int d;

cout <<"Enter date: " ;
cin >> d;

if (d<=0 || d>=31)
{
cout <<"Invalid input" ;
}

else if ( d>0 && d<=7 )

{

cout <<"Week 1"  ;

}

else if (d>7 && d<=14 )

{

cout <<"Week 2" ;

}

else if (d>14 && d<=21 )
{
cout <<"Week 3" ;
}
else 

{

cout <<"Week 4" ;

}


return 0;

}






