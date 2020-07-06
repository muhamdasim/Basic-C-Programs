#include <iostream>
using namespace std ;
int main ()
{
	int sec;
	cout <<"Enter number in seconds: " ;
	cin >> sec;
	if (sec>=60 && sec<=600)
	{
		int m ;
		m=sec/60 ;
		cout <<"Number of minute is: " << m ;
	}	
	else if (sec>=3600 && sec<86400)
	{
		int h ;
		h=sec/3600 ;
		cout <<"Number of hours is: " << h;
	}
	else if (sec>=86400)
	{
		int d;
		d=sec/86400 ;
		cout <<"Number of days are: " <<d;
	}
	return 0;

}


