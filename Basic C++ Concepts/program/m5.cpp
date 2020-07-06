#include <iostream>
using namespace std;
int main ()

{

char ch ;

cout <<" Enter Character " << endl;
cin >> ch;

switch (ch)

{

case 'a' :
case 'A' :
case 'e' :
case 'E' :
case 'i' :
case 'I' :
case 'o' :
case 'O' :
case 'u' :
case 'U' : 

cout <<"Vowel " ;

break ;

default: 

cout <<"Constant " ;

break ;

}

return 0;

}
