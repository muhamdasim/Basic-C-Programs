#include <iostream>
using namespace std;
int main()
{

int  month;
cout <<"Enter month" ;
cin >> month;

switch (month)
{

case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
cout <<"31 Days" ;
break;

case 2:
cout <<"29 days" ;
break;

default:
cout <<"30 days" ;

}

return 0;
}


