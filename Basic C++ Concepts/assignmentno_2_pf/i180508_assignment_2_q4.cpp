#include <iostream>
using namespace std ;

int main ()

{

int r;
float c;

cout <<"Enter radius: " ;
cin >> r;



if ( r <== 0)
    {
        cout << "Please enter positive integer";
    }
    
    else
    {

c=2*3.14*r ;

cout << "Circumfrence is: " << c ;

    }






return 0;

}
