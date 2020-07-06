#include <iostream>
using namespace std;
int main()
{
	int d,m;
	cout <<"Enter day ranges from 1 to 31 " <<endl ;
	cin >> d;
	cout <<"Enter month no" << endl;
	cin >> m;
	if (d<1 || d>31 )
	{
		cout <<"Please enter valid date" <<endl;
	}
	else if (m<1 || m>12 )
	{
		cout <<"Please enter valid month"<< endl;
	}
	if (d>=16 && m==3 || m==4 || m==5 || m==6 )

	{
		if (d>=16 && m==3 || m==4 || m==5 )
		{
			{
			cout <<"Spring" ;
			}
		}
			if (m==6 && d<=15 )
		
			{
				cout <<"Spring" ;
			}

	}
	if (d>=16 && m==6 || m==7 || m==8|| m==9 )

	{
		if (d>=16 && m==6 || m==7 || m==8 )
		{
			{
			cout <<"Summer" ;
			}
		}
			if (m==9 && d<=15 )
		
			{
				cout <<"Summer" ;
			}

	}
	if (d>=16 && m==9 || m==10 || m==11|| m==12 )

	{
		if (d>=16 && m==9 || m==10 || m==11 )
		{
			{
			cout <<"Fall" ;
			}
		}
			if (m==12 && d<=15 )
		
			{
				cout <<"Fall" ;
			}

else 
if (d>=16 || m==1 || m==2 || m==3 || m==12 )

	{
			cout <<"Winter" ;
			}
	else 	if (d>=16 || m==12 || m==1 || m==2 )
		{
			{
			cout <<"Winter" ;
			}
		}
			if (m==3 && d<=15 )
		
			{
				cout <<"Winter" ;
			}

	

	}
	return 0;
}
