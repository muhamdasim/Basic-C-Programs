#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout <<"Enter Numbers in subject A "<<endl;
	cin>> a;
	cout <<"Enter numbers in subect B " <<endl;
	cin >>b;
	float per1 ,per2;
	per1= (float (a)/100)*100 ;
	per2= (float (b)/100)*100 ;


	if (per1>=50 && per2>=45 )
	{
		cout <<"You passed" ;
	}
	else if ( per1>=45 && per2>=55 )
	{
		cout <<"You passed" ;
	}
	else if (per1>=65 && per2<45)
	{
		cout <<"You need to reappear" ;
	}
	else 
	{
		cout <<"Failed" ;
	}
	return 0;
}
