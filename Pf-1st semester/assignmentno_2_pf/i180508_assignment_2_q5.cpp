

#include <iostream>

using namespace std;

int main ()

{

char c;
int x;
char y;

cout << "Enter Capital letter " ;
cin >> c;

if (int (c) >=97 )
 {

cout <<"Enter Capital letter" ;
}

else 
{
x= int (c) +32 ;


y=char (x) ;
cout << "Character is" << y;
}

return 0;

}
