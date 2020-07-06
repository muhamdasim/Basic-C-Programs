#include <iostream>
using namespace std;
int main()
{
int x,y;
cout <<"enter no" << endl;
cin >> x;
cout <<"Enter no" <<endl;
cin >> y;


switch (x>y)
{

case 1:
cout << x;
break;
case 0:
cout << y;
break;
}
return 0;
}
