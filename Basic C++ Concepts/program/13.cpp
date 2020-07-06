


#include <iostream>
using namespace std;
int main()

{

int n;


int a;

a=n%100 ;

cout <<"Enter no of calls: " ;

cin >> n ;

if (n<=100 )

{

cout <<"Bill is 200" ;

}

else if ( n>100 && n<=150 )

{


cout <<"Bil is " << 200+ a*0.6 << endl ;

}

else if (n>150 && n<=200) 

{

cout <<"Bill is" << 200+a*0.5 << endl ;

}

return 0;

}



