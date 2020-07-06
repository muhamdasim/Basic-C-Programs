#include <iostream>
using namespace std;
int main()

{
	cout <<"Geometry Calculator" <<endl << "1. Calculate the Area of a Circle" <<endl <<"2. Calculate the Area of a Rectangle" <<endl <<"3. Calculate the Area of a Triangle" <<endl <<"4. Quit" <<endl << "Enter your choice (1-4):" << endl;
	int choice;
	cin >> choice ;
	
	if (choice ==4 )
	{
		terminate;
	}

	if (choice <1 || choice >4 )
	{
		cout<<"Error" <<endl;
	}
	else if (choice==1)
	{
		int r;
		cout<<"Enter radius" << endl;
		cin>>r;
		float pie=3.14159 ;
	if (r<0)
	{
		cout<<"Please Enter postive value" ;
	}
	else 
	{
		cout <<"Area of circle is:" << pie*r*r <<endl ;
	}
	}
	else if (choice==2)
	{
		int length,width;
		cout <<"Enter lenth" <<endl;
		cin>>length;
		cout <<"Enter width" <<endl;
		cin>>width;
	
	if (length <0 || width <0 )
	{
		cout<<"Enter postive value " <<endl;
	}
	else
	{
		cout <<"Area of rectangle is: " << length*width ;
	}
	}
	else if (choice==3)
	{
		int length1 ,base ,height ;
		cout<<"Enter length "<< endl;
		cin>>length1;
		cout<<"Enter base" <<endl;
		cin>> base;
		cout <<"Enter height" <<endl;
		cin>>height;

	if (length1 <0 || base <0 || height <0 )
	{
		cout <<"Please enter positive value" ;
	}
	else 
	{
		cout <<"Area of triangle is " << float (0.5*base*height) ;
	}
	}

	return 0;
}

























