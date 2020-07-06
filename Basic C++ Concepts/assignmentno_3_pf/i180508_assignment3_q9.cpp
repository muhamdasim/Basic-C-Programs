

#include <iostream>
using namespace std;
int main()
{
	int b;
	cout <<"Enter no of books purchased" <<endl ;
	cin>> b;
	if (b<0 )
	{
		cout <<"Enter valid input";
	}
	else if (b==0)
	{
		cout<<"Points earned:0 " ;
	}
	else if (b==1)
	{
		cout<<"Points earned:5" ;
	}
	else if (b==2)
	{
		cout<<"Points earned:15" ;
	}
	else if (b==3)
	{
		cout<<"Points earned:30" ;
	}
	else if (b>=4)
	{
		cout<<"Points earned:60" ;
	}
	return 0;
}
