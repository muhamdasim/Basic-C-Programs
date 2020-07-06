#include <iostream>
using namespace std;
int main()
{
char cha;
cin >> cha;

if (cha>='a' && cha<='z' || cha>='A' && cha<='Z')
{
cout <<"Alphabet" ;
}
else if (cha >='1' && cha<='9')
{
cout <<"Digit" <<endl;
}
else 
cout <<"Symbol" <<endl;
return 0;
}
