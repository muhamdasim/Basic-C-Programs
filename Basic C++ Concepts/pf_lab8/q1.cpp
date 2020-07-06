#include <iostream>
using namespace std;
int main()
{
	int a[3][3];
	int b[3][3];
	int mul[3][3];
	int i=0 ;
	int j=0;
	
	cout<<"Enter First Array Element" <<endl;	

	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			cin >>a[i][j];
		}
	}
	
	cout<<"Enter second Array Element" <<endl;
	
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			cin >>b[i][j];
		}
	}


	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			mul[i][j]=a[i][j]*b[i][j];
		}
	}
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			cout <<mul[i][j] << "  " ;
		}
	cout <<endl;
	}

}


