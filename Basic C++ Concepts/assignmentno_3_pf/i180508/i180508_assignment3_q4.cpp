#include <iostream>
using namespace std;
int main()
{
	char ch;

	cout <<"Enter character" << endl;
	cin>> ch;
	if (ch>=65 && ch<=90)
	{
		cout<<"Capital Letter" <<endl ;
	}
	else if (ch>=97 && ch<=122)
	{
		cout<<"Small letter"<<endl;
	}
	else if (ch>=48 && ch<=57)
	{
		cout<<"Digit"<<endl ;
	}
	else 
	{
		cout<<"Symbol" <<endl ;
	}
	return 0;

}

