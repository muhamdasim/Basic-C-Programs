#include <iostream>
using namespace std;
int main()
{
	int =2;
	int a[size][size];
	int b[size][size];
	int  mul[size][size];
	int i=0;	
	int j=0;
	int k=0;
	int sum=0;
	for (i=0 ; i<size ; i++)
	{
		for (j=0 ; j<size ; j++ )
		{
			cin >>a[i][j];
		}
	}

cout << " Next Array " ;

	for (i=0 ; i<size ; i++)
	{
	
		for (j=0 ; j<size ; j++ )
		{
			cin >>b[i][j];
		}
	}

	for (i=0 ;i <size ; i++ )
	{
		for (j=0 ; j<size ; j++ )
		{
	sum=0;
			for (k=0 ; k<size ; k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			mul[i][j]=sum;
		}
	}

	for (i=0 ; i<size ; i++ )
	{
		for (j=0 ; j<size ; j++)
	{
	cout <<mul[i][j] <<" " ;
	}
	cout <<endl;
	}

return 0;
}


