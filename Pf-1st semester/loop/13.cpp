#include <iostream>
using namespace std;
int main()
{

int first ,last ;
cout <<"Enter no" <<endl;
cin>> first;

while (first>10)
{
first=first/10 ;
}

cout <<"Enter no " <<endl;
cin >> last ;

last=last%10;

cout <<"First digit is: " << first <<endl;
cout <<"Last digit is: " <<last <<endl;

cout <<"After Swapping" <<endl;


cout <<"First digit is: " << last <<endl;
cout <<"Last digit is: " <<first <<endl;


return 0;

}
