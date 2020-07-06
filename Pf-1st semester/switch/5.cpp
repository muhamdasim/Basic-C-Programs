#include <iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter no" <<endl;
cin >> n;

switch (n%2==0)
{
case 1:
cout <<"Even" <<endl;
break;
case 0:
cout <<"Odd " <<endl;
break;
}
return 0;
}
