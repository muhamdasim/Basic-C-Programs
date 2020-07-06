#include <iostream>
using namespace std;

int main ()
{
	char color1;
	char color2;

	cout <<"Instructions " <<endl ;
	cout <<"Enter r for red" << endl <<"Enter b for blue " << endl <<"Enter y for yellow" <<endl ;


	cout <<"Enter your first color" << endl;
	cin >>color1;
	cout <<"Enter your second color" << endl;
	cin >>color2;
	int m;


	switch (color1)
	{

	case 'r' :

	switch (color2)
	{
	case 'b' :
	cout <<"You have purple color" ;
	break;
	case 'y' :
	cout <<"Get orange" ;
	break;
	default:
	cout <<"Error" ;

	}

	}

	switch (color2)
	{

	case 'r' :

	switch (color1)
	{
	case 'b' :
	cout <<"You have purple color" ;
	break;
	case 'y' :
	cout <<"Get orange" ;
	break;
	
	default:
	cout <<"Error" ;

	}
	}



	switch (color1)
	{

	case 'b' :

	switch (color2)
	{
	case 'y' :
	cout <<"You have green" ;
	break;

	}
	break ;

	default:
	cout <<"Error" ;

	}	

	switch (color1)
	{
	
	case 'y' :
	switch (color2)
	{
	case 'b' :
	cout <<"You have green" ;
	break;
	default:
	cout <<"Error" ;
	}
	break ;
	}

	return 0;
}

