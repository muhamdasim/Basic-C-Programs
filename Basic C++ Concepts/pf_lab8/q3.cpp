#include <iostream>
using namespace std;
int main()
{
	int a[100][100];
	int b[100][100];
	int mul[100][100];
	int i=0;
	int j=0;
	int k=0;
	int sum=0;
	int r1,c1,r2,c2;
	cout <<"Enter no rows " <<endl;
	cin>>r1;
	cout  <<"Enter no of col" <<endl;
	cin>>c1;
	cout <<"Enter no rows " <<endl;
	cin>>r2;
	cout  <<"Enter no of col" <<endl;
	cin>>c2;
	
if (r1==c2)
{
		for (i=0 ; i<r1 ; i++)
	{
		for (j=0 ; j<c1 ; j++)
		{
			cin >>a[i][j];
		}
	}
	for (i=0 ; i<r2 ; i++)
	{
		for (j=0 ; j<c2 ; j++)
		{
			cin >>b[i][j];
		}
	}

	for (i=0 ; i<r1 ; i++)
	{
		for (j=0 ; j<c2 ; j++)
		{
			sum=0;
			for (k=0 ; k<r1 ; k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
		mul[i][j]=sum;
		}
	}

	
	for (i=0 ; i<r1 ; i++)
	{
		for (j=0 ; j<c1 ; j++)
		{
			cout<<mul[i][j] <<"  " ;

		}
	cout <<endl;
	}
}
else
cout <<"Not possible" <<endl;
}

	
