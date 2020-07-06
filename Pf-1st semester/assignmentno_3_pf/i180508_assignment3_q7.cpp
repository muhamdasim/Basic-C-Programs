
#include <iostream>
using namespace std;
int main()
{
	int h,ts ;
	float cc;
	cout <<"Enter Hardness" <<endl;
	cin >>h;
	cout<<"Enter tensile streth" <<endl;
	cin>>ts;
	cout <<"Enter carbon content" <<endl ;
	cin>>cc;

	if (h>50 && cc<0.7 && ts>5600 )
	{
		cout <<"Grade of the steel is 10" ;
	}
	else if (h>50 && cc<0.7 && ts<5600 ) 
	{
		cout <<"Grade of the steel is 9" ;
	}
	else if (h<50 && cc<0.7 && ts>5600 )
	{
		cout <<"Grade of the steel is 8" ;
	}
	else if (h>50 && cc>0.7 && ts>5600 )
	{
		cout <<"Grade of the steel is 7" ;
	}
	else if (h>50 || cc<0.7 || ts>5600 )
	{
		cout <<"Grade of the steel is 6" ;
	}
	else if (h<50 && cc>0.7 && ts<5600 )
	{
		cout <<"Grade of the steel is 5" ;
	}

	return 0;

}
