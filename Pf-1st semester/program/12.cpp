#include <iostream>
using namespace std;
int main ()
{
int ram,sulabh,ajay ;

cout <<"Enter Ram age " << endl ;
cin >> ram;

cout <<"Enter sulabh age" <<endl ;
cin>> sulabh;
cout<<"Enter ajay age" <<endl ;
cin>>ajay ;

if (ram<=0 || sulabh<=0 || ajay<=0 )
{
cout <<"Invalid Input" ;
}

else if (ram<sulabh && ram<ajay)

{

cout <<"Youngest is ram" ;

}
}
