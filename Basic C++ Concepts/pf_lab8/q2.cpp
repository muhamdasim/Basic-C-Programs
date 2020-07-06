#include <iostream>
using namespace std;
int main()
{
	float a[2][2];
	float b[2][2];
	float mul[2][2];
	int i=0 ;
	int j=0;
	int k=0;
	int sum=0;
	
	cout<<"Enter First Array Element" <<endl;	

	for (i=0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			cin >>a[i][j];
		}
	}

		
	cout<<"Enter second Array Element" <<endl;


	for (i=0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			cin >>b[i][j];
		}
	}

	for (i=0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			sum=0;
			for (k=0 ; k<2 ; k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
		mul[i][j]=sum;
		}
	}

	
	for (i=0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			cout<<mul[i][j] <<"  " ;

		}
	cout <<endl;
	}

}
