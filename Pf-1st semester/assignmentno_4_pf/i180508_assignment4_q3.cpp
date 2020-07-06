#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e ;
	int counter=1 ;
	cout <<"Enter first no" <<endl;
	cin>>a ;
	cout <<"Enter Second no" <<endl;
	cin>>b ;
	cout <<"Enter third no" <<endl;
	cin>>c ;
	cout <<"Enter fourth no" <<endl;
	cin>>d ;
	cout <<"Enter fifth no" <<endl;
	cin>>e ;
	if (a>=1 && a<=30 )
	{	
		for ( counter=1 ; counter<=a ;  counter++ )
		{
			cout <<"*" ;
		}
	cout <<endl;
	}
		
	
	if (b>=1 && b<=30 )
		
	{
		for (counter=1 ; counter<=b ; counter++ )
		{
			cout <<"*" ;
		}
	cout <<endl;
	}
	if (c>=1 && c<=30 )
	{
		for (counter=1 ; counter<=c ; counter++ )
		{
			cout <<"*" ;
		}
	cout <<endl;
	}	
	if (d>=1 && d<=30 )
	{
		for (counter=1 ; counter<=d ; counter++ )
		{
			cout <<"*" ;
		}
	cout <<endl;
	}
	if (e>=1 && e<=30 )
	{
		for (counter=1 ; counter<=e ; counter++ )
		{
			cout <<"*" ;	
		}
	}
	return 0;

}

