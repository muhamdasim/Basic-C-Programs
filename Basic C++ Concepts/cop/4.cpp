#include  <iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter no" <<endl;
cin >> n;

(n%4==0 && n%400==0) ? cout <<"Leap " : cout <<"no leap" ;

return 0;

}
