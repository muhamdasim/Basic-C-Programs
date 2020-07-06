#include <iostream>
using namespace std;
int main()
{
	char color1;
	char color2;
	char r,b,y ;
	cout<< "Press r for red" <<endl <<"Press b for blue" <<endl <<"Press y for yellow" <<endl ;
	cout <<"Enter first color" << endl;
	cin>> color1;
	cout<<"Enter second color" <<endl;
	cin >> color2;



	if (color1 == 'r' && color2 == 'b' || color1=='b' && color2=='r')
	{
		cout<<"You have purple color" <<endl;

	}



	else if (color1=='r' && color2=='y' || color1=='y' && color2=='r')
	{
		cout<<"You have Orange color" <<endl;
	}

	else if (color1=='b' && color2=='y' || color1=='y' && color2=='b')
	{
		cout<<"You have green color" <<endl;
	}

	else 
	{
		cout<<"you have etered wrong color" <<endl;
	}

return 0;
}
