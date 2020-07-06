#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float eq;
	float x,y,r;
	cout <<"Enter x coordinate" <<endl;
	cin >>x;
	cout <<"Enter y coordinate" <<endl;
	cin>>y;
	cout <<"Enter radius" <<endl; 
	cin >>r;
	eq=pow(x,2) + pow(y,2)-pow(r,2);
	if (r<0)
	{
		cout<<"Enter radius in positve" <<endl;
	}
	else if (eq==0)
	{
		cout<<"Point lies on the circle" <<endl;
	}
	else if (eq<0)
	{
		cout<<"Point lies inside the circle" <<endl;
	}
	else if (eq>0)
	{
		cout<<"Point lies outside the circle" <<endl;
	}
return 0;
}


