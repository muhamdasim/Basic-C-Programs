#include <iostream>
using namespace std;
int main()
{
char ch;
cout <<"Enter any character" ;
cin >> ch;
bo

switch (ch)
{

case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
cout <<"Vowel" ;
break;
default:
cout <<"Constant" ;
}

return 0;
}
